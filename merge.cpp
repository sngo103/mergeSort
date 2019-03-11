#include <iostream>
#include <string>
#include "merge.h"
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

// Merge Sort Implementation
vector<int> mergeSort(vector<int> arr){
  // Base Case 1: If array is empty or has only one element, return array;
  if(arr.size() <= 1){
    return arr;
  } 
    vector<int> retArr;
  // Base Case 2: If array has two elements, sort the array and return;
  if (arr.size() == 2){
    if(arr[0] > arr[1]){
      retArr.push_back(arr[1]);
      retArr.push_back(arr[0]);
      return retArr;
    } else {
      return arr;
    }
  }
  // Else -- divide the array roughly into two arrays
  int half = arr.size()/2;
  vector<int> newArr1;
  vector<int> newArr2;
  for(int i = 0; i < half; i++){
    newArr1.push_back(arr[i]);
  }
  for(int i = half; i < arr.size(); i++){
    newArr2.push_back(arr[i]);
  }
  
  // call mergesort for each of the new arrays
  vector<int> retArr1 = mergeSort(newArr1);
  vector<int> retArr2 = mergeSort(newArr2);

  // merge the two new arrays
  int index1 = 0;
  int index2 = 0;

  while(index1 != retArr1.size() && index2 != retArr2.size()){
    if(retArr1[index1] <= retArr2[index2]){
      retArr.push_back(retArr1[index1]);
      index1 += 1;
    } else {
      retArr.push_back(retArr2[index2]);
      index2 += 1;
    }
  }
 
  while(index1 != retArr1.size()){
    retArr.push_back(retArr1[index1]);
    index1 += 1;
  }
  while(index2 != retArr2.size()){
    retArr.push_back(retArr2[index2]);
    index2 += 1;
  }
  
  // return combined array
  return retArr;
}

// *NOT WORKING
// Given an ordered vector of ints and a target, return the index of the target or -1 if not found:
int binarySearch(int target, vector<int> dataset){
  int upperBound = dataset.size();
  int lowerBound = 0;
  int middle = dataset.size()/2;
  int range = dataset.size();

  while(upperBound != lowerBound){
    cout << "U: " << upperBound << endl;
    cout << "L: " << lowerBound << endl;
    cout << "M: " << middle << endl;
    cout << "R: " << range << endl;
    cout << "========================================" << endl;
    if(target >= dataset[middle]){
      lowerBound = middle;
      range = range/2;
      middle = lowerBound + range;
    } else {
      upperBound = middle;
      range = range/2;
      middle = lowerBound + range;
    }
  }
  if(dataset[lowerBound] != target){
    return -1;
  } else {
    return lowerBound;
  }
}
