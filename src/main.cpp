#include <iostream>

#include "cube.h"
#include "encryption.h"

int main() {
    Encryption enc;
    std::string s = "qwerty";
    std::cout << enc.encrypt(s) << std::endl;
    std::cout << enc.decrypt(enc.get_key());
      
}