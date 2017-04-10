#include <iostream>
#include "BigInteger.h"
using namespace std;

int main(int argc, char const *argv[]) {
  BigInteger testValString,testValLLInt;
  testValString.setValue("12234141");
  testValString.printValue();
  testValLLInt.setValue(124325653242);
  testValLLInt.printValue();
  return 0;
}
