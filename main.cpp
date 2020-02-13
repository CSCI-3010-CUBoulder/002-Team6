#include<iostream>

#include "UtilityFunctions.h"

int main() {
    Utility ut_f;
    int temp = 3;
    int resultSign;
    int resultRemoves;
    resultSign = ut_f.Sign(temp);
    resultRemoves = ut_f.RemoveTwos(temp);
    return 0;
}

