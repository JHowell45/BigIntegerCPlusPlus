#include <iostream>
#include "LongSubtraction.h"
using namespace std;

SubResult subIndexValue(int firstVal, int secondVal, int carryOverValue) {
  SubResult res;
  int newRemainder = 0;
  int generatedResult = firstVal - secondVal - carryOverValue;
  if(firstVal >= 0) {
    if(generatedResult < 0) {
      newRemainder = 1;
    }
  } else {
    if(generatedResult < -10) {
      newRemainder = 1;
    }
  }

  res.result = generatedResult;
  res.carryOverValue = newRemainder;
  return res;
}
