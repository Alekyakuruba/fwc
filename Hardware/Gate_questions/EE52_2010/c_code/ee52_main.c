// ee52_main.c

#include <stdio.h>
#include "ee52.h"

int main() {
    int X, Y, Z;
    int F;

    printf("X Y Z | F\n");
    printf("-----------\n");

    for (int i = 0; i < 8; i++) {
        X = (i >> 2) & 1;
        Y = (i >> 1) & 1;
        Z = i & 1;

        F = kmap_function(X, Y, Z);
        printf("%d %d %d | %d\n", X, Y, Z, F);
    }

    printf("\nMinimized Function: F = X'Y + YZ (Option A)\n");

    return 0;
}
