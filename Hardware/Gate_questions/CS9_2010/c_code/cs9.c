//cs9.c

#include "cs9.h"

// Implements: f = (P ⊕ Q) ⊕ R
int compute_mux_output(int P, int Q, int R) {
    return (P ^ Q) ^ R;
}
