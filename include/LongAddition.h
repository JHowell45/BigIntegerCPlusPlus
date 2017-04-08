#ifndef LONGADDITION_H
#define LONGADDITION_H

struct AddResult {
  int result;
  int carryValue;
};

class LongAddition {

  public :
  AddResult addIndexValue(int firstVal, int secondVal, int carryOverValue);
};

#endif
