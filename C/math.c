// Test for efficiency of Mutiplication
#include <stdio.h>
#include <time.h>

unsigned long long multiply (unsigned long long x, unsigned long long y) {
  // return x * y;
  if (y == 0) {
    return 0;
  }
  unsigned long long z = multiply(x, y/2);
  if (y % 2 ==0){
    return 2*z;
  }
  else{
    return x+2*z;
  }
}

int main (void) {
  clock_t start = clock(), diff;
  
  unsigned long long result = multiply(100ULL, 25ULL);
  printf("Result %lld\n", result);
  diff = clock() - start;

  int msec = diff * 1000 / CLOCKS_PER_SEC;
  printf("Time taken %d seconds %d milliseconds\n", msec/1000, msec%1000);
  
  return 0;
}