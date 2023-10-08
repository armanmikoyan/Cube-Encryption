#include "encryption.h"


Encryption::~Encryption()
{
    for (int i = 0; i < _cubes.size(); ++i)
    {
        delete _cubes[i];
    }
}



void Encryption::rotate_right(Cube& cube, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        std::string tmp = cube.get_cube();
        cube[1] = tmp[0];
        cube[5] = tmp[1];
        cube[4] = tmp[5];
        cube[0] = tmp[4];

        cube[2] = tmp[3];
        cube[6] = tmp[2];
        cube[7] = tmp[6];
        cube[3] = tmp[7];  
    }
}

void Encryption::rotate_left(Cube& cube, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        std::string tmp = cube.get_cube();
        cube[0] = tmp[1];
        cube[4] = tmp[0];
        cube[5] = tmp[4];
        cube[1] = tmp[5];

        cube[3] = tmp[2];
        cube[7] = tmp[3];
        cube[6] = tmp[7];
        cube[2] = tmp[6];  
    }
}
void Encryption::rotate_up(Cube& cube, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        std::string tmp = cube.get_cube();
        cube[4] = tmp[0];
        cube[7] = tmp[4];
        cube[3] = tmp[7];
        cube[0] = tmp[3];

        cube[5] = tmp[1];
        cube[6] = tmp[5];
        cube[2] = tmp[6];
        cube[1] = tmp[2];  
    }
}
void Encryption::rotate_down(Cube& cube, size_t count)
{
    for (int i = 0; i < count; ++i)
    {
        std::string tmp = cube.get_cube();
        cube[3] = tmp[0];
        cube[7] = tmp[3];
        cube[4] = tmp[7];
        cube[0] = tmp[4];

        cube[2] = tmp[1];
        cube[6] = tmp[2];
        cube[5] = tmp[6];
        cube[1] = tmp[5];  
    }
}