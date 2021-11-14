#include "CaesarCipher.h"
#include <cstring>
#include <stdexcept>
#include <iostream>


CaesarCipher::CaesarCipher() {
    shift = getShift();
}

CaesarCipher::CaesarCipher(const CaesarCipher &cc) {
    shift = cc.shift;
}

string CaesarCipher::encrypt(string s ) {
    return encryptDecrypt(s, true);
}

string CaesarCipher::decrypt(string s) {
    return encryptDecrypt(s, false);
}

int CaesarCipher::getShift() {
    isSeeded = false;
    if (!isSeeded) {
        srand(time(NULL));
        isSeeded= true;
    }
    int low = 1;
    int high = OFFSET_MAX - OFFSET_MIN;
    return (rand() % (high - low)) + low;
}

string CaesarCipher::encryptDecrypt(string s, bool encrypt) {
    // string to be returned after being built by for-each loop below.
    string processed="";
    int n = s.length();

    // declaring character array
    char charArray[n + 1];

    // copying contents of input string to character array
    strcpy(charArray, s.c_str());
    for (int i = 0; i < n; i++) {
        int indx = charArray[i], cpos;
        if (!isPositionInRange(indx)) {
            string message = "String to be encrypted has unrecognized character ";
            message.push_back(charArray[i]);
            throw invalid_argument(message);
        }

        if (encrypt) {
            cpos = indx + shift;
            if (cpos > OFFSET_MAX)
                cpos = OFFSET_MIN + (cpos - OFFSET_MAX);
        } else {
            cpos = indx - shift;
            if (cpos < OFFSET_MIN)
                cpos = OFFSET_MAX - (OFFSET_MIN - cpos);
        }
        processed.push_back((char) cpos);
    }
    return processed;
}

bool CaesarCipher::isPositionInRange(int indx) {
    return indx >= OFFSET_MIN && indx <= OFFSET_MAX;
}






