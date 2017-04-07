#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
using namespace std;

class BigInteger {

  public :
  BigInteger();
  ~BigInteger();
  BigInteger add(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
  BigInteger subtract(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
  BigInteger multiply(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
  BigInteger divide(BigInteger destination, BigInteger firstVal, BigInteger secondVal);
};

#endif
