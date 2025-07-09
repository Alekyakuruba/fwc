// cs6.c

#include "cs6.h"

int compute_f(int P, int Q, int R) {
    int term1 = P && Q;        // PQ
    int term2 = Q && !R;       // QR'
    int term3 = !P && R;       // P'R
    return term1 || term2 || term3;
}
