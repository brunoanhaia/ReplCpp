#include <vector>

void printVector(std::vector<int>* value) {
  for (int v : *value){
    std::cout << v << " ";
  }
  std::cout << "\n";
}