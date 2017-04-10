#include <iostream>
#include "BigInteger.h"
using namespace std;

int main(int argc, char const *argv[]) {
  BigInteger testVal1, testVal2, testResult;
  testVal1.setValue(argv[1]);
  testVal2.setValue(argv[2]);
  testVal1.printValue();
  testVal2.printValue();
  testResult.add(testVal1,testVal2);
  testResult.printValue();
  return 0;
}
