// cs9_main.c

#include <stdio.h>
#include "cs9.h"

int main() {
    int P, Q, R, F;

    printf("P Q R | F\n");
    printf("-----------\n");

    for (int i = 0; i < 8; i++) {
        P = (i >> 2) & 1;
        Q = (i >> 1) & 1;
        R = i & 1;

        F = compute_mux_output(P, Q, R);
        printf("%d %d %d | %d\n", P, Q, R, F);
    }

    printf("\nBoolean Function: f = (P ⊕ Q) ⊕ R → Option B\n");
    return 0;
}
