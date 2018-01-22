#include <stdio.h>

unsigned long long euclid (unsigned long long x, unsigned long long y) {
    if (y == 0)
        return x;
    return euclid(y, x % y);
}

unsigned long long inverse (unsigned long long rp, unsigned long long e) {
    for (unsigned long long i = 1; i < rp; i++)
        if ((e*i) % rp == 1)
            return i;
}

int main (void) {
  unsigned long long p = 7, q = 13;
  unsigned long long rp = (p-1) * (q-1);

  for (unsigned long long i = 2; i < rp; i ++){
        if (euclid(rp, i) == 1)
            printf("(%lld,%lld)", i, inverse(rp, i));
  }
  printf("\n");
  return 0;
}