#include <iostream>
using namespace std;

int main() {

   int size;
   cout << "Enter size of array: ";
   cin >> size;
   int arr[size];
   for(int i =0; i<size; i++) {
      cout << "Enter array elements: ";
      cin >> arr[i] ;
   }
   
   //print array
   for(int j =0; j<size; j++) {
      cout << "Array: ";
      cout << arr[j] << " ";
      }
  return 0;    
 }
