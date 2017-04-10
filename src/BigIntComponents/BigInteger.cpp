/**
 * @file    BigInteger.h
 * @author  Jacob Howell
 * @date    06/04/2017
 * @version 1.0
 *
 * @brief This project is designed to add a larger integer type to C++
 *
 * @section DESCRIPTION
 * This program adds a new Integer type for c++ programs. It allows for the use of a much larger
 * Integer value and manipulate it.
 */

#include <iostream>
#include "BigInteger.h"
#include "LongAddition.h"
#include "BigIntUtils.h"
using namespace std;

// Calling External Functions
BigIntUtils utilFuncts;   ///< Used to access the functions from the BigIntUtils class.

// -------------------------------------------------------------------------------------------------

BigInteger :: BigInteger(void) {}

// -------------------------------------------------------------------------------------------------

BigInteger :: ~BigInteger(void) {}

// -------------------------------------------------------------------------------------------------

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

// -------------------------------------------------------------------------------------------------

void BigInteger :: setValue(long long int bigIntValue) {
  long long int temp = bigIntValue;
  string stringTemp = to_string(temp);
  arrayLength = stringTemp.length();
  bigIntArray = new int[arrayLength];
  for(int stringIndex = 0; stringIndex < stringTemp.length(); stringIndex++) {
    bigIntArray[stringIndex] = (int)stringTemp[stringIndex] - 48;
    //cout << stringIndex << ": " << bigIntArray[stringIndex] << endl;
  }
}

// -------------------------------------------------------------------------------------------------

unsigned long BigInteger :: getLength() {
  return arrayLength;
}

// -------------------------------------------------------------------------------------------------

int* BigInteger :: getValue() {
  return bigIntArray;
}

// -------------------------------------------------------------------------------------------------

void BigInteger :: printValue() {
  for(int arrIndex = 0; arrIndex < arrayLength; arrIndex++) {
    cout << bigIntArray[arrIndex];
  }
  cout << endl;
}

// -------------------------------------------------------------------------------------------------

void BigInteger :: add(BigInteger firstVal, BigInteger secondVal) {
  int* firstArray = firstVal.getValue();
  int* secondArray = secondVal.getValue();

  LargestArrayResult result = utilFuncts.getLargestArray(firstVal,secondVal);
  arrayLength = result.big;
  bigIntArray = new int[arrayLength];
  bigIntArray = utilFuncts.addTwoValues(firstArray,secondArray,result);
}

// -------------------------------------------------------------------------------------------------

void BigInteger :: subtract(BigInteger firstVal, BigInteger secondVal) {
  int* firstArray = firstVal.getValue();
  int* secondArray = secondVal.getValue();

  LargestArrayResult result = utilFuncts.getLargestArray(firstVal,secondVal);
  arrayLength = result.big;
  bigIntArray = new int[arrayLength];
}
