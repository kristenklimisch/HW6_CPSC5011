// Kristen Klimisch
// CPSC 5011, Seattle University

// CaesarCipher.h
// Specification file for the CaesarCipher class.
#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H

#include <string>
using namespace std;

class CaesarCipher
{
public:
    // Default constructor. Initializes the private shift field by calling
    // the private getShift() function.
    CaesarCipher();

    // Copy constructor.
    // Parameter:   A Caesar Cipher object, passed by const reference
    // Returns:     A CaesarCipher object that has the same value for the shift
    //              field as the Caesar Cipher object that was passed in.
    CaesarCipher(const CaesarCipher &);

    // Function to encrypt the string that is passed in as the input parameter.
    // Parameter:   The string to be encrypted.
    // Returns:     The encrypted string.
    string encrypt(string);

    // Function to decrypt the string that is passed in as the input parameter.
    // Parameter:   The string to be decrypted.
    // Returns:     The decrypted string.
    string decrypt(string);

    // The overloaded assignment operator.
    // Parameter:   A const reference to a CaesarCipher object
    // Returns:     A reference to the CaesarCipher object on the left side
    //              of the operator, which now has the same value for the
    //              shift field as the CaesarCipher object on the right side
    //              of the operator.
    CaesarCipher& operator = (const CaesarCipher &);

    // The overloaded + addition operator.
    // Parameter:   A const reference to a CaesarCipher object.
    // Returns:     A CaesarCipher object with a shift field value that is
    //              sum of the shift field value of the CaesarCipher object
    //              on the left side of the operator and the shift field value
    //              of the CaesarCipher object on the right side of the operator.
    //              The range of shift field values assigned by the getShift() function
    //              is 1 to MAX_SHIFT, which is OFFSET_MAX - OFFSET_MIN. If the
    //              sum of the CaesarCipher objects on both sides of the +
    //              operator is greater than MAX_SHIFT, the shift value
    //              assigned to the CaesarCipher object will be sum - MAX_SHIFT.
    CaesarCipher operator + (const CaesarCipher &);

    // The overloaded == equality operator.
    // Parameter:   A const reference to a CaesarCipher object.
    // Returns:     True if the CaesarCipher object on the left side of the
    //              operator has the same address in memory or the same value
    //              for the shift field as the CaesarCipher object on the right
    //              side of the operator; else returns false.
    bool operator == (const CaesarCipher &);

    // The overloaded < less than operator.
    // Parameter:    A const reference to a CaesarCipher object.
    // Returns:      True if the CaesarCipher object on the left side of the operator
    //               has a shift field value that is less than the shift field value
    //               of the CaesarCipher object on the right side of the operator;
    //               else returns false.
    bool operator < (const CaesarCipher &);

    // The overloaded > greater than operator.
    // Parameter:    A const reference to a CaesarCipher object.
    // Returns:      True if the CaesarCipher object on the left side of the operator
    //               has a shift field value that is greater than the shift field value
    //               of the CaesarCipher object on the right side of the operator;
    //               else returns false.
    bool operator > (const CaesarCipher &);

    // The overloaded prefix increment operator.
    // Increments the shift field value of a CaesarCipher object,
    // then returns a reference to the CaesarCipher object. If the shift
    // field value is equal to MAX_SHIFT prior to incrementation, the
    // increment operator will re-set the shift field value to 1.
    // MAX_SHIFT is the maximum value assigned by the getShift() function.
    // Returns:      A reference to the CaesarCipher object with the
    //               incremented shift field value.
    CaesarCipher& operator ++ ();

    // The overloaded postfix increment operator. Declares a CaesarCipher
    // object and initializes it with the CaesarCipher object to be
    // incremented. Increments the shift field value of the CaesarCipher
    // object. If the shift field value is equal to MAX_SHIFT
    // prior to incrementation, the increment operator will re-set the shift
    // field value to 1. MAX_SHIFT is the maximum value assigned by the
    // getShift() function. Returns the CaesarCipher object that was declared
    // and initialized prior to incrementation.
    // No parameters, there is an unused dummy int to
    // differentiate this operator from the prefix increment operator.
    // Returns:      A CaesarCipher object with the shift field value
    //               prior to incrementation.
    CaesarCipher operator ++ (int);

private:
    int shift;
    const int OFFSET_MIN = 32;
    const int OFFSET_MAX = 126;
    int getShift();
    string encryptDecrypt(string, bool);
    bool isPositionInRange(int);
    // Private static variable used to ensure that we only set the
    // seed value for the rand() function once.
    static bool isSeeded;

    // Private static variable that gives the maximum
    // shift value returned by the getShift() function.
    const int MAX_SHIFT = OFFSET_MAX - OFFSET_MIN;

};

#endif
