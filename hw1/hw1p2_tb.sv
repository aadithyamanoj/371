/* Testbench for Homework 1 Problem 2 */
module hw1p2_tb();
	logic clk, reset, in, out;
	hw1p2 dut(clk, reset, in, out);

	parameter CLOCK_PERIOD=100;
   initial
	 clk = 0;
   always
	 #(CLOCK_PERIOD/2)  clk <= ~clk;

	initial begin
    reset = 1; in = 0; @(posedge clk);
	reset = 0; @(posedge clk);
    in = 0; @(posedge clk);
    in = 0; @(posedge clk);
    in = 0; @(posedge clk);
    in = 1; @(posedge clk);
    in = 0; @(posedge clk);
    in = 1; @(posedge clk);
    $stop;
  end


	// this is just for verilator to give me a VCD :)
	// initial begin
	// 	$dumpfile("dump2.vcd");   
	// 	$dumpvars();
	// end
	
endmodule  // hw1p2_tb
