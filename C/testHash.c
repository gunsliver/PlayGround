#include <stdio.h>
#include <math.h>

int hash (int n) {
    double t = (float) n * log2((float) n);
    return (int)floor(t) % 31;
}

int main (void) {

    int list[31];
    for (int i = 0; i<31; i++)
        list[i] = 0;
    
    for (int i = 1; i <= 1000; i++){
        list[hash(i)]++;
        //printf("(%d,%d)", i, hash(i));
    }
    for (int i = 0; i<31; i++)
        printf("(%d,%d)", i, list[i]);
    printf("\n");
    return 0;
}