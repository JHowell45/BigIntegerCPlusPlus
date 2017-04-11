/**
* This class holds all of the utility methods used by the BigInteger file.
*
* @section DESCRIPTION
* This file contains all of the utility methods for use by BigInteger. This helps to spread out the
* program and prevent all of the code sitting in one file bulking it and making it harder to edit
* or debug.
*/
#ifndef BIGINTUTILS_H
#define BIGINTUTILS_H

#include "BigInteger.h"

/**
 * A struct.
 * This is used for storing the vlaues of which array is the longest and the difference between two
 * arrays. It also has a boolean value for saying which of the two arrays is longer.
 */
struct LargestArrayResult {
  unsigned long big; /**< The length of the largest array. */
  unsigned long small; /**< The length of the smallest array. */
  unsigned long diff; /**< The length of the difference between the sizes of the two arrays. */
  bool isFirstValBigger; /**< The boolean value for saying which of the two arrays is largest. */
};

class BigIntUtils {
  public :

  /**
   * This method is used for getting the larger of the two arrays and returning the values
   * discussed in the struct LargestArrayResult.
   * @method getLargestArray
   * @param  firstVal is the first array.
   * @param  secondVal is the second array.
   * @return a struct containing the length of the largest and smallest array, the difference as
   *           well as a boolean value saying which array is longer.
   * @see LargestArrayResult
   *
   *
   * This method is used for getting the length of the largest array ad returning it. It also makes
   * a not of the length of the other array as well as the difference. This data is used for when
   * using any of the operator fuctions as they make use of the array length. Having both lengths
   * is neccessary as both arrays may be different lengths. Having the boolean value also helps to
   * distinguish which array is longer too.
   *
   *
   * Example of use:
   * @code
   *    BigInteger arrayOne.setValue(23434324); // Sets the value of the first BigInteger variable to 23434324.
   *    BigInteger arrayTwo.setValue(2434); // Sets the value of the second BigInteger variable to 2434.
   *
   *    LargestArrayResult result = getLargestArray(arrayTwo,arrayTwo); // Returns the length of the arrays and which of the arrays is larger.
   * @endcode
   */
  LargestArrayResult getLargestArray(BigInteger firstVal, BigInteger secondVal);

  /**
   * This method is used to correctly add two BigInteger values.
   *
   * @param  firstNum is the first BigInteger variable to be added.
   * @param  secondNum is the second BigInteger variable to be added.
   * @param  result is the variable storing the lengths of the array as well as the difference in
   *                size and which of the two arrays is larger.
   * @return is the answer to be stored in a BigInteger result variable.
   * @see LargestArrayResult
   * @see getLargestArray(BigInteger firstVal, BigInteger secondVal)
   *
   *
   * This method is used to iterate through all of the values in both arrays and add them. It
   * starts from the end of both arrays and adds them a digit at a time. It then carries over any
   * additional value and adds that to the next addition. It does this until there are no more
   * numbers to add and returns this value. This mthod is used by the Program and isn't used by
   * the user.
   */
  int* addTwoValues(int* firstNum, int* secondNum, LargestArrayResult result);

  /**
   * [subTwoValues description]
   * @method subTwoValues
   * @param  firstNum
   * @param  secondNum
   * @param  result
   * @return
   *
   *
   *
   *
   *
   * Example of use:
   * @code
   *
   * @endcode
   */
  int* subTwoValues(int* firstNum, int* secondNum, LargestArrayResult result);
};

#endif
