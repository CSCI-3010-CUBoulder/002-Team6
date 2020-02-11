#include "UtilityFunctions.h"

int Utility::Sign(int num) {
    int test = abs(num);
    if ( num == test ) {
        return 1;
    }
    else {
        return -1;
    }
}