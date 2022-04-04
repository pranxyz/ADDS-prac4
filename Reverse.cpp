#include <iostream>
#include <string>
#include <algorithm>
#include "Reverse.h"
using namespace std;

int Reverse::reverseDigit(int value)
{
    if(value<10)
    {
    return -1;
    }
    int remainder,reversed;
    while(value != 0)
    {
        remainder = value%10;
        reversed = reversed*10 + remainder;
        value /= 10;
    }
    return reversed;
};

string Reverse::reverseString(string letter)
{
    reverse(letter.begin(),letter.end());
    return letter;
};