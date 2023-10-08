#include <iostream>

#include "cube.h"
#include "encryption.h"

int main() {
    Cube cube("arman");
    Encryption enc;
    std::cout << cube.get_cube() << "\n";
}