#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
using namespace std;

class BigInteger {
  unsigned long arrayLength;
  int* bigIntArray;

  public :
  BigInteger();
  ~BigInteger();
  void setValue(string intValue);
  unsigned long getLength();
  int* getValue();
  void printValue();
  void add(BigInteger firstVal, BigInteger secondVal);
  //BigInteger subtract(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
  //BigInteger multiply(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
  //BigInteger divide(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
};

#endif
