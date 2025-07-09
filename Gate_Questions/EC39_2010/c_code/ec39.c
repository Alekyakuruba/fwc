// ec39.c

#include "ec39.h"

// Implements the 4x1 MUX logic
int logic_function(int A, int B, int C, int D) {
    int I0 = C;
    int I1 = D;
    int I2 = !D;
    int I3 = C && !D;

    int select = (A << 1) | B;

    switch (select) {
        case 0: return I0;           // I0 = C
        case 1: return I1;           // I1 = D
        case 2: return I2;           // I2 = !D
        case 3: return I3;           // I3 = C AND !D
        default: return 0;
    }
}
