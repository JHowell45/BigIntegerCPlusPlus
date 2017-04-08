#include <iostream>
#include "BigInteger.h"
#include "LongAddition.h"
#include "BigIntUtils.h"
using namespace std;

// Calling External Functions
LongAddition addFuncts;
BigIntUtils utilFuncts;

BigInteger :: BigInteger(void) {
  //cout << "Object is being created" << endl;
}

BigInteger :: ~BigInteger(void) {
  //cout << "Object is being deleted" << endl;
}

void BigInteger :: setValue(string intValue) {
  string temp = intValue;
  arrayLength = temp.length();
  bigIntArray = new int[arrayLength];
  //cout << temp << endl;
  for(int stringIndex = 0; stringIndex < temp.length(); stringIndex++) {
    bigIntArray[stringIndex] = (int)temp[stringIndex] - 48;
    //cout << stringIndex << ": " << bigIntArray[stringIndex] << endl;
  }
}

unsigned long BigInteger :: getLength() {
  return arrayLength;
}

int* BigInteger :: getValue() {
  return bigIntArray;
}

void BigInteger :: printValue() {
  for(int arrIndex = 0; arrIndex < arrayLength; arrIndex++) {
    cout << bigIntArray[arrIndex];
  }
  cout << endl;
}

void BigInteger :: add(BigInteger firstVal, BigInteger secondVal) {
  // Getting arrays
  int* firstArray = firstVal.getValue();
  int* secondArray = secondVal.getValue();
  AddResult addResult = {0,0};

  // Getting the largest of the two arrays and assigning it along with the smallest and the difference.
  LargestArrayResult result = utilFuncts.getLargestArray(firstVal,secondVal);
  unsigned long largestArray = result.big;
  unsigned long smallestArray = result.small;
  unsigned long differenceInSize = result.diff;
  arrayLength = largestArray;
  bigIntArray = new int[arrayLength];
  cout << "Largest value: " << largestArray << endl;
  cout << "Smallest value: " << smallestArray << endl;
  cout << "Difference value: " << differenceInSize << endl;
  cout << "Is the first value longer: " << result.isFirstValBigger << endl;

  for(long long int counter = largestArray-1; counter >= 0; counter--) {
    unsigned long largeIndex = counter;
    unsigned long smallIndex = counter - differenceInSize;
    if(counter >= differenceInSize) {
      if(result.isFirstValBigger) {
        addResult = addFuncts.addIndexValue(firstArray[largeIndex],secondArray[smallIndex],addResult.carryValue);
      } else {
        addResult = addFuncts.addIndexValue(firstArray[smallIndex],secondArray[largeIndex],addResult.carryValue);
      }
      bigIntArray[counter] = addResult.result;
    } else {
      int currentVal;
      if(result.isFirstValBigger) {
        currentVal = firstArray[largeIndex];
      } else {
        currentVal = secondArray[largeIndex];
      }
      bigIntArray[counter] = currentVal;
    }
  }
  cout << endl;
}
