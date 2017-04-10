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
   * @param  firstVal        [description]
   * @param  secondVal       [description]
   * @return                 [description]
   */
  LargestArrayResult getLargestArray(BigInteger firstVal, BigInteger secondVal);

  /**
   * [addTwoValues description]
   * @method addTwoValues
   * @param  firstNum     [description]
   * @param  secondNum    [description]
   * @param  result       [description]
   * @return              [description]
   */
  int* addTwoValues(int* firstNum, int* secondNum, LargestArrayResult result);

  /**
   * [subTwoValues description]
   * @method subTwoValues
   * @param  firstNum     [description]
   * @param  secondNum    [description]
   * @param  result       [description]
   * @return              [description]
   */
  int* subTwoValues(int* firstNum, int* secondNum, LargestArrayResult result);
};

#endif
