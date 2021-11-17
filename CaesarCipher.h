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

    CaesarCipher& operator ++ ();
    CaesarCipher operator ++ (int);

private:
    static bool isSeeded;
    int shift;
    const int OFFSET_MIN = 32;
    const int OFFSET_MAX = 126;
    int getShift();
    string encryptDecrypt(string, bool);
    bool isPositionInRange(int);

};

#endif
