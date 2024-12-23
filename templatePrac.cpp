// Write a function to find the maximum of two values of any type.
#include <iostream>
using namespace std;

template <typename T>
T findMaximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << findMaximum(10, 20) << endl;       
    cout << findMaximum(3.14, 2.71) << endl;   
    cout << findMaximum('a', 'z') << endl;     
    return 0;
}