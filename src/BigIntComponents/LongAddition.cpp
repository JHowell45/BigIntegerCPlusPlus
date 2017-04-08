#include <iostream>
#include "LongAddition.h"
using namespace std;

AddResult LongAddition :: addIndexValue(int firstVal, int secondVal, int carryOverValue) {
  AddResult res;
  int newRemainder = 0;
  //cout << "First value is: " << firstVal << endl;
  //cout << "Second value is: " << secondVal << endl;
  int generatedResult = firstVal + secondVal + carryOverValue;
  if(generatedResult > 9) {
    newRemainder = 1;
  }
  //cout << "The result is: " << generatedResult << endl;
  res.result = generatedResult % 10;
  res.carryValue = newRemainder;
  return res;
}
