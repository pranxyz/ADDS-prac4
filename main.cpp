#include <iostream>
#include <algorithm>
#include "Reverse.cpp"
#include "Truckloads.cpp"
#include "EfficientTruckloads.cpp"
using namespace std;

int main()
{
   Reverse reverse;
   Truckloads truckloads;
   EfficientTruckloads efficienttruckloads;

   cout <<"";
   string s;
   int i,numCrates,loadSize;
   cin >> i>>s>>numCrates>>loadSize;

      if(i<0)
       cout<<"ERROR"<<" ";
   else
       cout<<reverse.reverseDigit(i)<<" ";

   cout<<reverse.reverseString(s)<<" ";

   if(loadSize<1)
       cout << "ERROR"<<" ";
   else
       cout << truckloads.numTrucks(numCrates,loadSize)<<" ";

   if(loadSize<1)
       cout << "ERROR" <<endl;
   else
       cout << efficienttruckloads.numTrucks(numCrates,loadSize) << endl;

    return 0;
};
