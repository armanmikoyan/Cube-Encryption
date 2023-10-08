#include <iostream>

#include "cube.h"
#include "encryption.h"

int main() {
    Cube cube("arman");
    Encryption enc;
    std::string s = "armanmik oyanaaaaa ";
    std::cout << enc.encrypt(s) << std::endl;
    std::cout << enc.get_key() << std::endl;
      
}