// ee53.c

#include "ee53.h"

// Implements F = X'Y + YZ
int circuit_function(int X, int Y, int Z) {
    int notX = !X;
    int and1 = notX && Y;  // X'Y
    int and2 = Y && Z;     // YZ
    return and1 || and2;   // OR both terms
}
