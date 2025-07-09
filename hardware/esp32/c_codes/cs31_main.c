// cs31_main.c

#include <stdio.h>
#include "cs31.h"

int main() {
    int P, Q, R, F;

    printf("P Q R | F\n");
    printf("-----------\n");

    for (int i = 0; i < 8; i++) {
        P = (i >> 2) & 1;
        Q = (i >> 1) & 1;
        R = i & 1;

        F = compute_output(P, Q, R);
        printf("%d %d %d | %d\n", P, Q, R, F);
    }

    printf("\nBoolean expression implemented:\n");
    printf("F = [ (P + Q)' + (Q + R)' ]' + [ (P + R)' + (Q + R)' ]' ]'\n");

    return 0;
}
