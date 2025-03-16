`default_nettype none
`timescale 1ns / 1ns
`define SIM

module tb(
input clk,
input rst
);

initial begin
	$dumpfile("tb.vcd");
	$dumpvars(0, tb);
	#1;
end

wire M1;
wire pwm;
wire toggle;

wire spi_mode;
wire [3:0] ROM_DO;
wire [3:0] ROM_DI;
wire ROM_OEB;
wire CS_ROM;
wire SCLK_ROM;

assign ROM_DI[0] = spi_mode ? ROM_DO[0] : (ROM_OEB ? 1'bz : ROM_DO[0]);
assign ROM_DI[1] = spi_mode ? 1'b1 : (ROM_OEB ? 1'bz : ROM_DO[1]);
assign ROM_DI[2] = spi_mode ? 1'b1 : (ROM_OEB ? 1'bz : ROM_DO[2]);
assign ROM_DI[3] = spi_mode || ROM_OEB ? 1'bz : ROM_DO[3];

wire RAM_we;
wire [5:0] RAM_addr;
wire [7:0] RAM_in;
wire [7:0] RAM_out;
reg [7:0] RAM [63:0];
assign RAM_out = RAM[RAM_addr];

always @(posedge clk) begin
	if(RAM_we) RAM[RAM_addr] <= RAM_in;
end

wire [7:0] PORTB;
wire [7:0] PORTB_DDR;

wire lo = PORTB_DDR[5] == 0 ? 1'bx : PORTB[5];
wire hi = PORTB_DDR[4] == 0 ? 1'bx : PORTB[4];
tri1 SCL;
tri1 SDA;
assign SCL = PORTB_DDR[7] ? PORTB[7] : 1'bz;
assign SDA = PORTB_DDR[6] ? PORTB[6] : 1'bz;

qcpu qcpu(
	.clk(clk),
	.rst_n(!rst),
	.CS_ROM(CS_ROM),
	.SCLK_ROM(SCLK_ROM),
	.ROM_DO(ROM_DO),
	.ROM_DI(ROM_DI),
	.ROM_OEB(ROM_OEB),
	.ROM_spi_mode(spi_mode),
	
	.RAM_we(RAM_we),
	.RAM_addr(RAM_addr),
	.RAM_in(RAM_in),
	.RAM_out(RAM_out),
	
	.PORTB_DDR(PORTB_DDR),
	.PORTB(PORTB),
	.PINB(PORTB_DDR & PORTB),
	.PINA(8'h00),
	
	.M1(M1),
	
	.pause(1'b0),
	.intb(1'b1),
	.pwm(pwm),
	.toggle(toggle)
);

W25Q128JVxIM W25Q128JVxIM(
	.CSn(CS_ROM),
	.CLK(SCLK_ROM),
	.DIO(ROM_DI[0]),
	.WPn(ROM_DI[2]),
	.HOLDn(ROM_DI[3]),
	.DO(ROM_DI[1])
);

endmodule
