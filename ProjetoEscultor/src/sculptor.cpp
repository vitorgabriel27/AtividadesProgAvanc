  
#include <cstdlib>
#include <iostream>
#include "sculptor.hpp"
#include <vector>
#include <fstream>
#include <cmath>

bool isInside(int i, int j ,int k,int xcenter, int ycenter, int zcenter,int rx, int ry, int rz){
    return ((pow(i - xcenter, 2) / pow(rx, 2) + pow(j - ycenter, 2) / pow(ry, 2) + pow(k - zcenter, 2) / pow(rz, 2)) < 1);
}