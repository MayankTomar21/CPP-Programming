#include <iostream>
using namespace std;

int main() {
  
   int size; 
  cout << "Enter size of array: ";
   cin >> size;
  
  int arr[size];
  for(int i =0; i<size; i++) {
    cout << "Enter elements of array: ";
     cin >> arr[i];
  }
  
  for(int j=size-1; j>=0; j--) {
    cout << arr[j] << " ";
  }
  
  return 0;
}
