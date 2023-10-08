#include <iostream>

#include "cube.h"
#include "encryption.h"

int main() {
    Cube cube("arman");
    Encryption enc;
    std::string s = "armanmikoyan";
    std::cout << enc.encrypt(s) << std::endl;
      
}