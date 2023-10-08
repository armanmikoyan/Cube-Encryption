#ifndef ENCRYIPTION_H
#define ENCRYIPTION_H

#include "cube.h"

#include <vector>
#include <string>


class Encryption {
public:
    Encryption() = default;
   ~Encryption(); 

public:     
    void encrypt(std::string, size_t, size_t, size_t, size_t);
    void decrypt();

private:
    void rotate_right(Cube&, size_t);
    void  rotate_left(Cube&, size_t);
    void    rotate_up(Cube&, size_t);
    void  rotate_down(Cube&, size_t);

public:
//    std::string _key;
   std::vector<Cube*> _cubes;
};




#endif // ENCRYIPTION_H