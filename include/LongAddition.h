#ifndef LONGADDITION_H
#define LONGADDITION_H

struct AddOneResult {
  int result;
  int carryValue;
};

class LongAddition {

  public :
  bool checkAddOneToNextValue(int firstVal, int secondVal);
  AddOneResult addIndexValue(int firstVal, int secondVal);
};

#endif
