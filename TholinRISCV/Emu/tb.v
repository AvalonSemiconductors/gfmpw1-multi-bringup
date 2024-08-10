`default_nettype wire
`timescale 1ns/10ps

module tb(
	input clk,
	input rst
);

wire [15:0] bus_out;

wire le_lo;
wire le_hi;
reg [31:0] full_addr_latch;
wire [31:0] full_addr = {le_hi ? bus_out : full_addr_latch[31:16], le_lo ? bus_out : full_addr_latch[15:0]};
wire OEb;
wire WEb_lo;
wire WEb_hi;

reg [15:0] RAM [262143:0];
reg [15:0] ROM [262143:0];

initial begin
	for(integer i = 0; i < 262144; i++) begin
		RAM[i] = $random;
		ROM[i] = 16'hFFFF;
	end
	$readmemh("../baremetal.txt", ROM);
end

always @(posedge clk) begin
	if(le_lo) full_addr_latch[15:0] <= bus_out;
	if(le_hi) full_addr_latch[31:16] <= bus_out;
	if(!WEb_lo && full_addr[30]) RAM[full_addr[17:0]][7:0] <= bus_out[7:0];
	if(!WEb_hi && full_addr[30]) RAM[full_addr[17:0]][15:8] <= bus_out[15:8];
end

tholin_riscv tholin_riscv(
    .clk(clk),
    .rst_n(!rst),
    .bus_out(bus_out),
    .bus_in(full_addr[30] ? RAM[full_addr[17:0]] : ROM[full_addr[17:0]]),
    .le_lo(le_lo),
    .le_hi(le_hi),
    .bus_dir(),
    .OEb(OEb),
    .WEb_lo(WEb_lo),
    .WEb_hi(WEb_hi),

    .SCLK(),
    .SDI(1'b0),
    .SDO(),
    .TXD(),
    .RXD(1'b1),
    .PORT_dir(),
    .PORT_out(),
    .PORT_in(6'h00)
);

`ifdef TRACE_ON
initial begin
	$dumpfile("tb.vcd");
	$dumpvars();
end
`endif

endmodule
