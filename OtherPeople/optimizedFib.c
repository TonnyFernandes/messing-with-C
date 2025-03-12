#include<stdio.h>

const int COUNT_TO = 30; // counts to 30th fib number

int main() {
  int n1 = 0, n2 = 1;
  for (int i = 0; i < COUNT_TO; ++i) {
    // print number
    printf("%2d: %1d\n", i + 1, n1);

    // add numbers
    n1 += n2;
    
    // swap number (super fast)
    n1 ^= n2; // ^ means xor
    n2 ^= n1;
    n1 ^= n2;
  }
  return 0;
}

// fair warning, this counts so fast, it will likely overflow
// (overflow starts at the 48th fib number)
