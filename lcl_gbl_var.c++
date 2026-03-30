#include <iostream>
using namespace std;

// Global variable
int a = 5;

void print() {
    cout << "\nInside print(), global a = " << a;
}

int main() {
    // Local variable (shadows global 'a')
    int a = 7;

    cout << "Inside main(), local a = " << a << endl;

    a++; // increment local 'a'
    cout << "After increment, local a = " << a << endl;

    // Call function that prints global 'a'
    print();

    return 0;
}