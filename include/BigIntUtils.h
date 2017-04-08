#ifndef BIGINTUTILS_H
#define BIGINTUTILS_H

#include "BigInteger.h"

struct LargestArrayResult {
  unsigned long big;
  unsigned long small;
  unsigned long diff;
  bool isFirstValBigger;
};

class BigIntUtils {
  public :
  LargestArrayResult getLargestArray(BigInteger firstVal, BigInteger secondVal);
};

#endif
