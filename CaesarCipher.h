// CaesarCipher.h
// Specification file for the CaesarCipher class.
#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H

#include <string>
using namespace std;

class CaesarCipher
{
public:
    CaesarCipher();
    CaesarCipher(const CaesarCipher &);
    string encrypt(string);
    string decrypt(string);
    CaesarCipher& operator = (const CaesarCipher &); 
    CaesarCipher operator + (const CaesarCipher &); 
    bool operator == (const CaesarCipher &);
    bool operator < (const CaesarCipher &);
    bool operator > (const CaesarCipher &);
    CaesarCipher& operator ++ ();
    CaesarCipher operator ++ (int);

private:
    int shift;
    const int OFFSET_MIN = 32;
    const int OFFSET_MAX = 126;
    int getShift();
    string encryptDecrypt(string, bool);
    bool isPositionInRange(int);

    // declaring static variable to ensure the same shift isn't given every time
    // the getShift() function is called, per suggestion in assignment spec.
    // should be made static, but need to figure out how to do this
    bool isSeeded;
};

#endif
