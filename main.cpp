#include <iostream>
#include <vector>
#include "QuickSort/lib.cpp"
#include "QuickSort/quick_sort.cpp"

int main() {

  /* Setting our input vector  */
  std::vector<int> inputVector = { 3,8,7,10,0,23,2,2,1, 1,77,7 };
  
  printVector(&inputVector);

  quick_sort(&inputVector, 0, inputVector.size()-1);

  printVector(&inputVector);

  return 0;
}
