// cs31.c

#include "cs31.h"

// NOR operation
int nor(int a, int b) {
    return !(a || b);
}

// Complete circuit logic
int compute_output(int P, int Q, int R) {
    int nor1 = nor(P, Q);       // (P + Q)'
    int nor2 = nor(Q, R);       // (Q + R)'
    int nor3 = nor(P, R);       // (P + R)'

    int upper = nor(nor1, nor2);   // [(P + Q)' + (Q + R)']'
    int lower = nor(nor3, nor2);   // [(P + R)' + (Q + R)']'

    int f = nor(upper, lower);     // Final output
    return f;
}
