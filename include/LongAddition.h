/**
 * This class holds all of the methods for executing the long addition.
 *
 * @section DESCRIPTION
 * This class contains all of the methods neededfor checking and adding two integer values together.
 * This class takes two integers provided by another class and runs a form of long division. This
 * means that if the value ends up being two digits or increasing by greater than the value of 10,
 * it adds 1 to the remainder value
 */
#ifndef LONGADDITION_H
#define LONGADDITION_H

/**
 * A struct.
 * This struct is used for storing the result returned by adding the first and second value and
 * also the remainder.
 */
struct AddResult {
  int result; /**<  This value holds the single digit result from adding the two values. */
  int carryValue; /**<  This value holds the remainder if applicable. */
};

class LongAddition {

  public :
  /**
   * This method adds two values and returns the result and a remainder.
   * @param  firstVal is the first integer to be added.
   * @param  secondVal is the second integer to be added.
   * @param  carryOverValue is the carry over number from the previous addition.
   * @return the result for adding the numbers and the remainder.
   *
   *
   * This method adds two single digit numbers together. If the answer ends up being greater than
   * a single digit the answer is only the last digit and the remainder is incremented by the rest
   * of the other numbers.
   *
   *
   * Example of use:
   * @code
   *    AddResult result = addIndexValue(firstVal[index],secondVal[index],carryOverValue);
   * @endcode
   */
  AddResult addIndexValue(int firstVal, int secondVal, int carryOverValue);
};

#endif
