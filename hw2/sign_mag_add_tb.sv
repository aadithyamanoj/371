/* Testbench for Homework 2 Problem 3 */
module sign_mag_add_tb ();
	parameter N = 4;
	logic [N-1:0] sum;   // for the output of sign_mag_add - do not rename
	logic [N-1:0] data;  // for the output of sync_rom - do not rename

	// for you to implement BOTH sign_mag_add and sync_rom
	logic [N-1:0] a, b;
	logic clk;

	initial begin
		clk = 0;
		forever #10 clk = ~clk; // clock period of 10 time units
	end
	sign_mag_add #(N) dut1 (
    .a(a),
    .b(b),
    .sum(sum)
  );
  
  sync_rom dut2 (
	.clk(clk),
	.addr({a,b}),
	.data(data)
  );
initial begin	
	// Test Case 1: Some number + 0
	a = 4'b0011; // +3 
	b = 4'b0000; // +0 
	@(posedge clk);
	$display("[Test 1] +3 + 0          : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 1] +3 + 0          : data = %b", data);

	// Test Case 2: pos + neg = 0
	a = 4'b0100; // +4 
	b = 4'b1100; // -4 
	@(posedge clk);
	$display("[Test 2] +4 + (-4) = 0    : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 2] +4 + (-4) = 0    : data = %b", data);

	// Test Case 3: pos + neg > 0
	a = 4'b0110; // +6 
	b = 4'b1011; // -3 
	@(posedge clk);
	$display("[Test 3] +6 + (-3) > 0    : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 3] +6 + (-3) > 0    : data = %b", data);

	// Test Case 4: pos + neg < 0 
	a = 4'b0010; // +2 
	b = 4'b1101; // -5 
	@(posedge clk);
	$display("[Test 4] +2 + (-5) < 0    : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 4] +2 + (-5) < 0    : data = %b", data);

	// Test Case 5: pos + pos (valid addition)
	a = 4'b0010; // +2 
	b = 4'b0011; // +3 
	@(posedge clk);
	$display("[Test 5] +2 + +3 (valid)   : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 5] +2 + +3 (valid)   : data = %b", data);

	// Test Case 6: pos + pos (overflow)
	a = 4'b0110; // +6 
	b = 4'b0110; // +6 
	@(posedge clk);
	$display("[Test 6] +6 + +6 (overflow) : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 6] +6 + +6 (overflow) : data = %b", data);

	// Test Case 7: neg + neg (valid addition)
	a = 4'b1010; // -2 
	b = 4'b1011; // -3 
	@(posedge clk);
	$display("[Test 7] -2 + (-3) valid  : a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 7] -2 + (-3) valid  : data = %b", data);

	// Test Case 8: neg + neg (overflow)
	a = 4'b1110; // -6 
	b = 4'b1110; // -6 
	@(posedge clk);
	$display("[Test 8] -6 + (-6) overflow: a = %b, b = %b, sum = %b", a, b, sum);
	$display("[Test 8] -6 + (-6) overflow: data = %b", data);
	$finish;
end
    
    
  
	
endmodule  // sign_mag_add_tb