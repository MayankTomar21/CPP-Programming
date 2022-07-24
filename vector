#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> a  = {1,2,3,4,5};
    vector<int> b = {1,2,3,4,5};

    vector<int> c(5,12); // {12,12,12,12,12}

    cout << "size of vector: "  << a.size() << endl;
    b.clear();
    cout << "clear vector: " << b.size() << endl;
    cout << "first element of vector b: " << b.front() << endl;
    cout << "last element of vector: " << a.back() << endl;
    cout << "Vector is empty: " << c.empty()  << endl;
    cout << "size of vector : " << c.capacity() << endl;

    cout << "Element at index 2: " << a.at(2) << endl;
    cout << "Element at index 1: " << c.at(1) << endl;

    cout << "vector a: ";
    for(int i =0; i<a.size(); i++) {
        cout << a[i] << " ";
    }

    a.at(1) = 13;
    c.at(3) = 11; //changed values of vector

    a.pop_back(); //removed last element
    return 0;

}
