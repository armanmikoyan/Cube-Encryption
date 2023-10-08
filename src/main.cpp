#include <iostream>

#include "cube.h"
#include "encryption.h"

int main() {
    Encryption enc;
    std::string s = "hello arman mikoyan @ mail . com";
    std::cout << enc.encrypt(s) << std::endl;
    std::cout << enc.decrypt(enc.get_key()) << "\n";   
}