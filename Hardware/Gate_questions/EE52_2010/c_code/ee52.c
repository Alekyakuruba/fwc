// ee52.c

#include "ee52.h"

// Implements F = X'Y + YZ
int kmap_function(int X, int Y, int Z) {
    return (!X && Y) || (Y && Z);
}
