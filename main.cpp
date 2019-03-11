#include <iostream>
#include <vector>
#include <cstdlib>
#include "merge.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;

int main(){
  cout << "Sort: Merge Sort..." << endl;
  vector<int> testArray;
  for(int i = 0; i < 25; i++){
    testArray.push_back(rand() % 100);
  }

  cout << "Test Array: ";
  for(int i = 0; i < 25; i++){
    cout << testArray[i] << " | ";
  }
  cout << endl;

  vector<int> newArr = mergeSort(testArray);

  cout << "Test Array: ";
  for(int i = 0; i < newArr.size(); i++){
    cout << newArr[i] << " | ";
  }
  cout << endl;
  
  return 0;
}
