/**
 * This class holds all of the methods for executing the long subtraction.
 *
 * @section DESCRIPTION
 * This class contains all of the methods needed for checking and subtracting one BigInteger value
 * from another. It does so using a form of long subtraction. Essentially it iterates through the
 * array in reverse order, going from the last digit to the first, subtracting one value at a time.
 * If the combined value of subtracting the digits exceeds a two digit result, only the last digit
 * of the result is returned and the other numbers are added to the following calculation as a
 * carry over value.
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
