#include "CaesarCipher.h"

CaesarCipher::CaesarCipher() {
    shift = getShift();
}

CaesarCipher::CaesarCipher(const CaesarCipher &cc) {
    shift = cc.shift;
}

string CaesarCipher::encrypt(string) {

}

string CaesarCipher::decrypt(string) {

}



