#include <iostream>

using namespace std;

int main() {
    // Pointer Basics
    int a = 10;
    int* p = &a;

    cout << "Address stored in pointer p: " << p << endl;
    cout << "Value of a using pointer p: " << *p << endl;

    *p = 20;
    cout << "New value of a: " << a << endl;

    // Pointer Arithmetic
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    cout << "\nPointer Arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "]: " << (ptr + i) << ", Value: " << *(ptr + i) << endl;
    }

    return 0;
}
