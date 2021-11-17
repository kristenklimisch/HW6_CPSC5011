// Kristen Klimisch
// CPSC 5011, Seattle University
// This program demonstrates the CaesarCipher class'
// Big 4 operations and overloaded operators 
#include "CaesarCipher.h"
#include <string>
#include <iostream>
using namespace std;



int main() {
    cout << "*****  RUN 1: *****"<< endl;

    cout << "\ntest constructor : cc" << endl;
    CaesarCipher cc;
    string encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    string decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest constructor : cc2" << endl;
    CaesarCipher cc2;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\n*** testing copy constructor and overloaded assignment ***" << endl;

    cout << "\ntest copy constructor : cc3(cc2)" << endl;

    CaesarCipher cc3 = cc2;
    encryptedWord = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc3.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest overloaded assignment operator : cc2 = cc" << endl;
    cc2 = cc;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\n*** printing cc, cc2, and cc3 ***" << endl;

    cout << "\ntest constructor : cc" << endl;
    encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest constructor : cc2" << endl;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest constructor : cc3" << endl;
    encryptedWord = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc3.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\n*** testing comparators ***" << endl;

    cout << "\ntest comparators" << endl;
    // Added test that wasn't shown in sample output
    // to verify that cc2 == cc returns true.
    if (cc2 == cc) {
        cout << "cc2 == cc is true" << endl;
    }
    if (!(cc == cc3) ) {
        cout << "cc == cc3 is false" << endl;
    }
    if (cc < cc3) {
        cout << "cc < cc3 is true" << endl;
    }
    if (!(cc > cc3) ) {
        cout << "cc > cc3 is false" << endl;
    }

    cout << "\n*** testing add ***" << endl;

    cout << "\ntest add : cc2 = cc + cc3" << endl;
    cc2 = cc + cc3;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\n*** testing increment ***" << endl;

    cout << "\ntest increment (postfix) : cc4 = cc++" << endl;
    CaesarCipher cc4;
    cc4 = cc++;
    encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\nresult of cc4 after postfix" << endl;
    encryptedWord = cc4.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc4.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest increment (prefix) : cc4 = ++cc" << endl;
    cc4 = ++cc;
    encryptedWord = cc.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\nresult of cc4 after prefix" << endl;
    encryptedWord = cc4.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc4.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest increment (postfix) : cc4 = cc2++" << endl;
    cc4 = cc2++;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\nresult of cc4 after postfix" << endl;
    encryptedWord = cc4.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc4.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest increment (prefix) : cc4 = ++cc2" << endl;
    cc4 = ++cc2;
    encryptedWord = cc2.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc2.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\nresult of cc4 after prefix" << endl;
    encryptedWord = cc4.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc4.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest increment (postfix) : cc4 = cc3++" << endl;
    cc4 = cc3++;
    encryptedWord = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc3.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\nresult of cc4 after postfix" << endl;
    encryptedWord = cc4.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc4.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest increment (prefix) : cc4 = ++cc3" << endl;
    cc4 = ++cc3;
    encryptedWord = cc3.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc3.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\nresult of cc4 after prefix" << endl;
    encryptedWord = cc4.encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = cc4.decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\n----------------------------" << endl;

    cout << "\n*** testing list ***" << endl;

    cout << "\ntest list : add cc, cc2, cc3" << endl;
    CaesarCipher a[3] = {cc, cc2, cc3};

    cout << "\ntest print list[0] : " << endl;
    encryptedWord = a[0].encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = a[0].decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest print list[1] : " << endl;
    encryptedWord = a[1].encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = a[1].decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    cout << "\ntest print list[2] : " << endl;
    encryptedWord = a[2].encrypt("Hello, world!");
    cout << "Encrypted: " << encryptedWord << endl;
    decryptedWord = a[2].decrypt(encryptedWord);
    cout << "Decrypted: " << decryptedWord << endl;

    return 0;
}
