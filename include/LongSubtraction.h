/**
 *
 */
#ifndef LONGSUBTRACTION_H
#define LONGSUBTRACTION_H

struct SubResult {
  int result;
  int carryOverValue;
};

class LongSubtraction {

  public :
  SubResult subIndexValue(int firstVal, int secondVal, int carryOverValue);
};

#endif
