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
  cout << "Binary Search........................." << endl;
  vector<int> binaryArr;
  for(int i = 0; i < 10; i += 3){
    binaryArr.push_back(i);
  }
  cout << "Binary Search Array: ";
  for(int i = 0; i < binaryArr.size(); i++){
    cout << binaryArr[i] << " | ";
  }
  cout << endl;
  cout << binarySearch(9, binaryArr) << endl;
  
  return 0;
}
