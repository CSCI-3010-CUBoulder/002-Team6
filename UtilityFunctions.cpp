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

int Utility::RemoveTwos(int original){
  bool done = false;
  int answer = 0;
  while (!done){
    if (answer % 2 == 0){
      answer = original / 2;
    }
    else{
      done = true;
    }
  }
  return answer;
}