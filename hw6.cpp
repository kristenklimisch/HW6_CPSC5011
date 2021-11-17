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










    return 0;
}
