// Two Number Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
   // Write your code here.
   vector<int> numbers;
   for (size_t i = 0; i < array.size() - 1; i++)
   {
      for (size_t j = i + 1; j < array.size(); j++)
      {
         if ((array[i] + array[j]) == targetSum)
         {
            return vector<int>{array[i], array[j]};
         }
      }
   }
   return vector<int>();
}


int main()
{
    std::cout << "Hello World!\n";
}

