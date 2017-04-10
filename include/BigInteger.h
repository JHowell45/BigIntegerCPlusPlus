/**
 * This project is designed to add a larger integer type to C++
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
  unsigned long arrayLength; /**< This variable is used for storing the length of the array. */
  int* bigIntArray; /**< This variable is used for storing the number. */

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
   * @param intValue is the String representation of the number the user wants to be
   * stored in the BigInteger variable.
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
   *    BigInteger test.setValue("143654543242"); // Assigns the string 143654543242 to the variable test
   * @endcode
   */
  void setValue(string intValue);

  /**
   * Sets the value of the BigInteger variable.
   * @param  bigIntValue is the long long int representation of the number the user wants to be
   * stored in the BigInteger variable.
   * @see BigInteger()
   * @see ~BigInteger()
   * @see setValue(long long int bigIntValue)
   * @see getValue()
   * @see printValue()
   *
   *
   * Similar to the method setValue(string intValue) this allows for the use of the method with a
   * long long int argument. This is a form of method overloading allowing for both methods to be
   * viable and also providing the use of the function with an argument of differing types.
   *
   * Example of use:
   * @code
   *    BigInteger test.setValue(54234243); // Assigns the number 54234243 to the variable test
   * @endcode
   */
  void setValue(long long int bigIntValue);

  /**
   * Retrieves the length of the number held by the variable.
   * @return The length of the number.
   * @see BigInteger()
   * @see ~BigInteger()
   * @see setValue(string intValue)
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
   * @see setValue(long long int bigIntValue)
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
   * @param  firstVal  is the number to have a value subtracted from.
   * @param  secondVal is the number to subtract.
   * @return the result of subtracting secondVal from firstVal.
   * @see @see BigInteger()
   * @see ~BigInteger()
   * @see setValue(string intValue)
   * @see setValue(long long int bigIntValue)
   *
   * This method is used for subtracting one value from another. It takes a similar approach to add
   * using a form of long subtraction. It odes the calculations one digit at a time and carries
   * over any number that exeeds two digits.
   *
   * Example of use:
   * @code
   *    BigInteger firstNumber.setValue("100"); // Assign the number 100 to the variable firstNumber.
   *    BigInteger secondNumber.setValue("20"); // Assign the number 20 to the variable secondNumber.
   *
   *    BigInteger result.subtract(firstNumber,secondNumber); // Assigns the result of subtracting secondNumber from firstNumber, giving the result 80, to the variable result.
   * @endcode
   */
  void subtract(BigInteger firstVal, BigInteger secondVal);

  /**
   * This method is used to multiply two BigInteger values together.
   * @param  firstVal  is the first value to multiply.
   * @param  secondVal is the second value to multiply.
   * @see @see BigInteger()
   * @see ~BigInteger()
   * @see setValue(string intValue)
   * @see setValue(long long int bigIntValue)
   *
   *
   * This method is used to multiply two BigInteger numbers together.
   *
   * Example of use:
   * @code
   *    BigInteger firstNumber.setValue(20); // Assign the number 20 to the variable firstNumber.
   *    BigInteger secondNumber.setValue(55); // Assign the number 55 to the variable secondNumber.
   *
   *    BigInteger result.multiply(firstNumber,secondNumber); // Assigns the result of multiplying the firstNumber and the secondNumber.
   * @endcode
   */
  void multiply(BigInteger firstVal, BigInteger secondVal);

  /**
   * This method is used to divide two BigInteger values together.
   * @param  firstVal  is the first value to multiply.
   * @param  secondVal is the second value to multiply.
   * @see @see BigInteger()
   * @see ~BigInteger()
   * @see setValue(string intValue)
   * @see setValue(long long int bigIntValue)
   *
   *
   * This method is used to divide the first BigInteger number by the second BigInteger number.
   *
   * Example of use:
   * @code
   *    BigInteger firstNumber.setValue(30); // Assign the number 30 to the variable firstNumber.
   *    BigInteger secondNumber.setValue(6); // Assign the number 6 to the variable secondNumber.
   *
   *    BigInteger result.divide(firstNumber,secondNumber); // Assigns the result of dividing the firstNumber by the secondNumber.
   * @endcode
   */
  void divide(BigInteger firstVal, BigInteger secondVal);
};

#endif
