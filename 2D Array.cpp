#include <iostream>
using namespace std;

int main() {
    
    int s1,s2;  //s1 is no of rows , s2 is no of columns
    cout << "Enter size of array: ";
    cin >> s1 >> s2;
    int arr[s1][s2];  //total size of array is s1*s2

    for(int i =0; i<s1; i++) {
        for(int j =0; j<s2; j++) {
            cout << "Enter elements of array: ";
            cin >> arr[i][j] ;
        }
    }

    cout << "Printing 2d array: ";
    for(int i =0; i<s1; i++) {
        for(int j =0; j<s2; j++) {
            cout << arr[i][j] << " ";
        }
    }
}
