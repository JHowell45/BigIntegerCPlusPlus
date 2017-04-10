/**
*
*
*/
#ifndef BIGINTUTILS_H
#define BIGINTUTILS_H

#include "BigInteger.h"

struct LargestArrayResult {
  unsigned long big;
  unsigned long small;
  unsigned long diff;
  bool isFirstValBigger;
};

struct AddTwoValuesResult {
  int* array;
};

class BigIntUtils {
  public :
  LargestArrayResult getLargestArray(BigInteger firstVal, BigInteger secondVal);
  int* addTwoValues(int* firstNum, int* secondNum, LargestArrayResult result);
};

#endif
