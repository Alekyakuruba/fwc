// ec39_main.c

#include <stdio.h>
#include "ec39.h"

int main() {
    int A, B, C, D;
    int result;
    int minterms[16];
    int count = 0;

    printf("A B C D | F\n");
    printf("--------------\n");

    for (int i = 0; i < 16; i++) {
        A = (i >> 3) & 1;
        B = (i >> 2) & 1;
        C = (i >> 1) & 1;
        D = i & 1;

        result = logic_function(A, B, C, D);

        printf("%d %d %d %d | %d\n", A, B, C, D, result);

        if (result == 1) {
            minterms[count++] = i;
        }
    }

    // Print minterm expression
    printf("\nFinal Minterm Expression: F(A, B, C, D) = Σm(");
    for (int i = 0; i < count; i++) {
        printf("%d", minterms[i]);
        if (i < count - 1) printf(", ");
    }
    printf(")\n");

    return 0;
}
