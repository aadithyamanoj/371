/* Module for EE/CSE371 Homework 1 Problem 1.
 * A simple synchronous signal with a DFF and fullAdder.
 */

//this is needed for verilator it can be ignored :)
// `include "fullAdder.sv"

module hw1p1 (
	input logic clk
	,input logic reset
	,input logic x
	,input logic y
	,output logic s
);

logic Q, C;

fullAdder fa1(x, y, Q, s, C);

always_ff @(posedge clk) begin
	if (reset) 
		Q <= 1'b0;
	else 
		Q <= C;
end

endmodule  // hw1p1
