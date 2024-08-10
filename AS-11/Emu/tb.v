`default_nettype wire
`timescale 1ns/10ps

module tb(
	input clk,
	input rst
);

reg [15:0] RAM [32767:0];

initial begin
	for(integer i = 0; i < 32768; i++) begin
		RAM[i] = $random;
	end
	$readmemh("../BOOT.txt", RAM, 0, 32767);
end

wire [32:0] io_in;
wire [32:0] io_out;
wire [32:0] io_oeb;

wire [15:0] db_out = io_out[15:0];
wire ALE = io_out[16];
wire BDIR = io_out[17];
wire OEB = io_out[18];
wire WEB = io_out[19];
wire HALTD = io_out[20];
wire SCLK = io_out[21];
wire DO = io_out[22];
wire TX = io_out[24];

wire DI = 1'b0;
wire RX = 1'b1;
assign io_in[23] = DI;
assign io_in[25] = RX;

wire [6:0] PA_dir = ~io_oeb[32:26];
wire [6:0] PA_out = io_out[32:26] & PA_dir;
assign io_in[32:26] = ~PA_dir & io_out[32:26];

wire HCPL = PA_out[0];
wire HCCLK = PA_out[5];
wire HCDI = PA_out[6];
wire [1:0] SPICS = PA_out[3:2];
wire disp_CD = HCDI;

reg [15:0] addr_latch;
assign io_in[15:0] = RAM[addr_latch[15:1]] & ~{16{OEB | !BDIR}};

always @(posedge clk) if(ALE) addr_latch <= db_out;

always @(negedge WEB) begin
	RAM[addr_latch[15:1]] <= db_out;
end

wrapped_pdp11 wrapped_pdp11(
	.wb_clk_i(clk),
	.rst_n(!rst),
	.io_in(io_in),
	.io_out(io_out),
	.io_oeb(io_oeb),
	.custom_settings('h8000C)
);

`ifdef TRACE_ON
initial begin
	$dumpfile("tb.vcd");
	$dumpvars();
end
`endif

endmodule
