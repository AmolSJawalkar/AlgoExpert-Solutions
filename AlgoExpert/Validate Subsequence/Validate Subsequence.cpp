// Validate Subsequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
   // Write your code here.
   size_t seqIndex = 0, arrIndex = 0;
   while (seqIndex < sequence.size() && arrIndex < array.size())
   {
      if (sequence[seqIndex] == array[arrIndex])
         seqIndex++;

      arrIndex++;
   }


   return seqIndex == sequence.size();
}

int main()
{
    std::cout << "Hello World!\n";
}

