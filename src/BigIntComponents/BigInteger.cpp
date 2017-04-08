#include <iostream>
#include "BigInteger.h"
using namespace std;

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
  // Initialising pointers to each array.
  int* firstValPointer = firstVal.getValue();
  int* secondValPointer = secondVal.getValue();

  // Getting the lengths of both arrays
  unsigned long firstArrayLength = firstVal.getLength();
  unsigned long secondArrayLength = secondVal.getLength();
  // Getting the largest of the two arrays and assigning it.
  unsigned long largestArray;
  unsigned long smallestArray;
  unsigned long differenceInSize;
  if(firstArrayLength >= secondArrayLength) {
    largestArray = firstArrayLength;
    smallestArray = secondArrayLength;
  } else {
    largestArray = secondArrayLength;
    smallestArray = firstArrayLength;
  }
  differenceInSize = largestArray - smallestArray;

  // Creating comparison arrays for both values
  int tempFirstArray[firstArrayLength];
  int tempSecondArray[secondArrayLength];

  // Adding the values to the first comparison array.
  for(unsigned long firstValueIndex = 0; firstValueIndex < firstArrayLength; firstValueIndex++) {
    tempFirstArray[firstValueIndex] = firstValPointer[firstValueIndex];
  }
  // Adding the values to the second comparison array.
  for(unsigned long secondValueIndex = 0; secondValueIndex < secondArrayLength; secondValueIndex++) {
    tempSecondArray[secondValueIndex] = secondValPointer[secondValueIndex];
  }

  for(int counter = largestArray-1; counter >= 0; counter--) {
    if(counter <= differenceInSize) {

    }
  }
}
