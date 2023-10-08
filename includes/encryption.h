#ifndef ENCRYIPTION_H
#define ENCRYIPTION_H

#include "cube.h"

#include <vector>
#include <string>

#include <random>

class Encryption {
public:
    Encryption() = default;
   ~Encryption(); 

public:     
    std::string& encrypt(std::string&);
    void decrypt();

private:
    void rotate_right(Cube&, size_t);
    void  rotate_left(Cube&, size_t);
    void    rotate_up(Cube&, size_t);
    void  rotate_down(Cube&, size_t);
    void  create_cubes(std::string&);
    static int       random_number();
    std::string get_hash() const;

public:
//    std::string _key;
   std::vector<Cube*> _cubes;
   std::string _hash;
};




#endif // ENCRYIPTION_H