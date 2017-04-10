#include <iostream>
#include "BigIntUtils.h"
#include "BigInteger.h"
#include "LongAddition.h"
using namespace std;

LongAddition addFuncts;

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

int* BigIntUtils :: addTwoValues(int* firstNum, int* secondNum, LargestArrayResult result) {
  unsigned long largestArray = result.big;
  unsigned long differenceInSize = result.diff;
  unsigned long largeIndex;
  unsigned long smallIndex;
  int* resultArray = new int[largestArray];
  int currentVal;
  AddResult addResult = {0,0};

  for(long long int counter = largestArray-1; counter >= 0; counter--) {
    largeIndex = counter;
    smallIndex = counter - differenceInSize;
    if(counter >= differenceInSize) {
      if(result.isFirstValBigger) {
        addResult = addFuncts.addIndexValue(firstNum[largeIndex],secondNum[smallIndex],addResult.carryValue);
      } else {
        addResult = addFuncts.addIndexValue(firstNum[smallIndex],secondNum[largeIndex],addResult.carryValue);
      }
      resultArray[counter] = addResult.result;
    } else {
      if(result.isFirstValBigger) {
        currentVal = firstNum[largeIndex];
      } else {
        currentVal = secondNum[largeIndex];
      }
      resultArray[counter] = currentVal;
    }
  }
  return resultArray;
}
