#ifndef DICE_HPP
#define DICE_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die{
    public:
        int sides;
    Die(int sd);
    int Roll();

};


#endif