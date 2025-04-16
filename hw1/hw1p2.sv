/* Module for EE/CSE371 Homework 1 Problem 2.
 * An arbitrary Mealy FSM.
 */
module hw1p2 (
	input logic clk
	,input logic reset
	,input logic in
	,output logic out
);
	logic [2:0] ps, ns;
	//dermining the next state based on input and current state
	always_comb begin 
		case (ps)
			3'b000:begin 
				if(in) begin
					ns = 3'b100;
					out = 1'b1;
				end
				else begin
					ns = 3'b011;
					out = 1'b0;
				end
			end
			3'b001:begin
				if (in)begin
					ns = 3'b100;
					out = 1'b1;
				end
				else begin
					ns = 3'b001;
					out = 1'b0;
				end
			end
			3'b010:begin
				if (in) begin
					ns = 3'b000;
					out = 1'b1;
				end
				else begin
					ns = 3'b010;
					out = 1'b0;
				end
			end
			3'b011:begin
				if (in)begin 
					ns = 3'b010;
					out = 1'b1;
				end
				else begin
					ns = 3'b001;
					out = 1'b0;
				end
			end
			3'b100:begin
				if (in)begin
					ns = 3'b011;
					out = 1'b0;
				end
				else begin
					ns = 3'b010;
					out = 1'b0;
				end
			end
			default: begin 
					ns = 3'bxxx;
					out = 1'bx;
			end
					
		endcase
		
	end

	// update the current state on the clock edge
	always_ff @(posedge clk) begin
		if (reset) 
			ps <= 3'b000;
		else 
			ps <= ns;
	end	

	// for you to implement

endmodule  // hw1p2
