#include "verilated.h"
#include "Vhw1p1_tb.h"
#include "verilated_vcd_c"

int main(int argc, char **argv) {
    // Initialize Verilators variables
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vhw1p1_tb *top = new Vhw1p1_tb;

   while(!Verilated::gotFinish()) {
        top->eval();
    }
    delete top;
    return 0;
}