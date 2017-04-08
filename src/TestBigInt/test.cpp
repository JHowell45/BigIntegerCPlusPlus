#include <iostream>
#include "BigInteger.h"
using namespace std;

int main(int argc, char const *argv[]) {
  BigInteger testVal1, testVal2, testResult;
  testVal1.setValue("1234567890");
  testVal2.setValue("2356704234");
  //testVal1.printValue();
  testResult.add(testVal1,testVal2);
  return 0;
}
