#ifndef UTILITY_H
#define UTILITY_H


Class Utility{
  public:
  // returns -1 if the number is negative and 1 if positive
  int Sign(int num);
  
  // divides an input integer by 2 until it is impossible to do so, then returns the final number.
  // (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
  int RemoveTwos(int original);

  
}

#endif