// ee53_main.c

#include <stdio.h>
#include "ee53.h"

int main() {
    int X, Y, Z, F;

    printf("X Y Z | F\n");
    printf("-----------\n");

    for (int i = 0; i < 8; i++) {
        X = (i >> 2) & 1;
        Y = (i >> 1) & 1;
        Z = i & 1;

        F = circuit_function(X, Y, Z);

        printf("%d %d %d | %d\n", X, Y, Z, F);
    }

    printf("\nCircuit Realization: Option (B)\n");
    return 0;
}
