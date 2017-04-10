/**
 * @version 1.0
 *
 * @brief This project is designed to add a larger integer type to C++
 *
 * @section DESCRIPTION
 * This program adds a new Integer type for c++ programs. It allows for the use of a much larger
 * Integer value and manipulate it.
 */

#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
using namespace std;

class BigInteger {
  unsigned long arrayLength;
  int* bigIntArray;

  public :
  /**
   * A constructor.
   * Constructor for creating a BigInteger.
   */
  BigInteger();

  /**
   * A destructor.
   * Removes the constructor when the program ends.
   */
  ~BigInteger();

  /**
   * Sets the value of the BigInteger variable.
   * @param intValue is the String representation of the number the user wants added to the
   * variable.
   * @see BigInteger()
   * @see ~BigInteger()
   * @see getValue()
   * @see printValue()
   *
   *
   * This sets the current BigInteger variable to be the numerical Type of the String number
   * entered by the user. Although this method does not return any values it does assign the value
   * to a the BigInteger value when appended.
   *
   *
   * Example of use:
   * @code
   *    BigInteger test.setValue("143654543242"); // Assigns the number 143654543242 to the variable test
   * @endcode
   */
  void setValue(string intValue);

  /**
   * Retrieves the length of the number held by the variable.
   * @return The length of the number.
   * @see BigInteger()
   * @see ~BigInteger()
   * @see setValue()
   *
   *
   * This method is used for retrieving the length of the number in the BigInteger variable. This
   * method is mainly used by other methods, however, was kept public so the user can use and
   * access it.
   *
   * Example of use:
   * @code
   *    BigInteger test.getLength(); // Will return the length of the array stored in the variable test.
   * @endcode
   */
  unsigned long getLength();

  /**
   * This method is used to retrieve the current value stored in the BigInteger variable.
   * @return The pointer to the start of the array containing the number.
   *
   * The numbers stored in the BigInteger type are stored as an array. This means in order to
   * access their results we access them by using a pointer to the start of the array.
   *
   * Example of use:
   * @code
   *    BigInteger test.getValue(); // Returns a pointer to the start of the array holding the value of the BigInteger variable test.
   * @endcode
   */
  int* getValue();

  /**
   * This method is used for printing thr value of the BigInteger value.
   *
   * As the values are stored as arrays, this method iterates through, printing each number in
   * sequence.
   *
   * example of use:
   * @code
   *    BigInteger test.printValue(); // Prints the value of test correctly.
   * @endcode
   */
  void printValue();

  /**
   * This method is used to add two BigInteger values.
   * @param  firstVal  is the first BigInteger value to be added.
   * @param  secondVal is the second BigInteger value to be added.
   * @see BigInteger()
   * @see ~BigInteger()
   * @see setValue(string intValue)
   *
   *
   * The result is then assigned to the BigInteger value it is appended to. It adds the two values
   * using a form of long division adding individual digits one at a time, starting from the end
   * of both arrays, and carrying over a 1 if the result exceeds 10. It then stores this in a new
   * array to be stored in a BigInteger variable.
   *
   *
   * Example of use:
   * @code
   *    BigInteger firstVal.setValue("20"); // Create variable and assign it the value 20.
   *    BigInteger secondValue.setValue("15"); // Create variable and assign it the value 15.
   *
   *    BigInteger result.add(firstVal,secondValue); // Add both values and append the answer, 35, the BigInteger result.
   * @endcode
   */
  void add(BigInteger firstVal, BigInteger secondVal);

  /**
   * This method is used to subtract one BigInteger value from another.
   * @param  firstVal  [description]
   * @param  secondVal [description]
   * @return           [description]
   */
  BigInteger subtract(BigInteger firstVal, BigInteger secondVal);
  BigInteger multiply(BigInteger firstVal, BigInteger secondVal);
  BigInteger divide(BigInteger firstVal, BigInteger secondVal);
};

#endif
