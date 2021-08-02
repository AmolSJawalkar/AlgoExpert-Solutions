// Sorted Squared Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
   // Write your code here.
   vector<int> squaredArray;
   std::transform(array.begin(), array.end(), std::back_inserter(squaredArray), [](int val) {
      return val * val;
      });

   std::sort(squaredArray.begin(), squaredArray.end(), [](int a, int b) {return a < b; });
   return squaredArray;
}

int main()
{
    std::cout << "Hello World!\n";
}


