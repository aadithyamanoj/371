/* Testbench for Homework 1 Problem 1 */
module hw1p1_tb();

	logic clk, reset, x, y, s;

	hw1p1 dut(clk, reset, x, y, s);


	parameter CLOCK_PERIOD=100;
  initial
    clk = 0;
  always
    #(CLOCK_PERIOD/2)  clk <= ~clk;

	initial begin
    reset = 1;x = 0;y = 0;@(posedge clk);
    reset = 0; x = 0; y = 0;  @(posedge clk);
    x = 1;  y = 0;  @(posedge clk);    
    x = 0; y = 1;  @(posedge clk);
    x = 1;  y = 1;   @(posedge clk);
    x = 0;  y = 0;  @(posedge clk);
    x = 1;  y = 1;  @(posedge clk);
    x = 0;   y = 1;  @(posedge clk);
    x = 1;  y = 0;  @(posedge clk);
    x = 1;  y = 1;  @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    $stop;
  end

	// this is just for verilator to give me a VCD :)
	// initial begin
	// 	$dumpfile("dump.vcd");  
	// 	$dumpvars();
	// end
	
endmodule  // hw1p1_tb