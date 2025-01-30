#include <iostream>
#include <string>
#include "dice.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

Die::Die(int sides):
sides(sides) {
    cout << endl;
}

int Die::Roll(){
    return ((rand()%sides)+1);
}
