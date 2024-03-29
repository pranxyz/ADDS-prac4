#include <iostream>
#include "Truckloads.h"
#include <algorithm>

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if(loadSize <= 0)
    return -1;
    if(numCrates <= loadSize)
    return 1;
    if(numCrates % 2)
    return numTrucks(numCrates/2 + 1, loadSize) + numTrucks(numCrates/2, loadSize);
    return 2 * numTrucks(numCrates/2, loadSize);
};
