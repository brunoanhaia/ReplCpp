#include <iostream>
#include <vector>
#include "lib.h"

int partition (std::vector<int>* value, int first_index, int last_index) {
  int pivot_index = first_index;

  /* Setting pivotCounter member  */
  int lessThanPivotCount = pivot_index;

  for (int i = pivot_index + 1; i < value->size(); i++){
    /* We just found a number smaller or equal our pivot_index,
       we will add a counter and then swap those numbers 
     */
    if (value->at(i) < value->at(pivot_index)) {
      lessThanPivotCount++;
      std::swap(value->at(lessThanPivotCount), value->at(i));
    }
  }
  /* Swaping pivot member with last found number  */
  std::swap(value->at(pivot_index), value->at(lessThanPivotCount));

  return lessThanPivotCount;
}

void quick_sort(std::vector<int>* value, int left_index, int right_index){
  if (left_index < right_index) {

    int pivot_index = partition(value, left_index, right_index);
    
    /* Evaluate left side of pivot */
    quick_sort(value, left_index, pivot_index - 1);
    /* Evaluate right side of pivot */
    quick_sort(value, pivot_index + 1, right_index);
  }
}

int main() {

  /* Setting our input vector  */
  std::vector<int> inputVector = { 3,8,7,10,0,23,2,2,1, 1,77,7 };
  
  printVector(&inputVector);

  quick_sort(&inputVector, 0, inputVector.size()-1);

  printVector(&inputVector);

  return 0;
}
