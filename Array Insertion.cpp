#include <iostream>
using namespace std;

int main() {

    int arr[] = {23,3,45,33};
    cout << "Array: ";
    for(int i =0; i<4; i++) {
        cout << arr[i] << " ";
    }

    int x  = 20;
    int pos = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    n++;
    for(int i =n-1;i>= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = x;
    cout << endl;
    cout << "After Insertion: ";
    for(int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
