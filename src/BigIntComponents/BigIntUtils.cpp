#include <iostream>
#include "BigIntUtils.h"
#include "BigInteger.h"
using namespace std;

LargestArrayResult BigIntUtils :: getLargestArray(BigInteger firstVal, BigInteger secondVal) {
  LargestArrayResult res;
  unsigned long firstArrayLength = firstVal.getLength();
  unsigned long secondArrayLength = secondVal.getLength();

  if(firstArrayLength >= secondArrayLength) {
    res.big = firstArrayLength;
    res.small = secondArrayLength;
    res.isFirstValBigger = true;
  } else {
    res.big = secondArrayLength;
    res.small = firstArrayLength;
    res.isFirstValBigger = false;
  }
  res.diff = res.big - res.small;
  return res;
}
