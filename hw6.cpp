// This program demonstrates the CaesarCipher class' 
// Big 4 operations and overloaded operators 
#include "CaesarCipher.h"
#include <string>
#include <iostream>
using namespace std;

// initializing static member variable
bool CaesarCipher::isSeeded = false;

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


    return 0;
}
