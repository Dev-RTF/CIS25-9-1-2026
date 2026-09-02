#include <iostream>

using namespace std;

// global variable, can be accessed by all functions here
int y = 99;

// returns nothing (void)
void myFunction(int age, string name) {
    cout << "Hello from within myFunction!\n";
    cout << age << endl;
    cout << name << endl;
}

int add(int x, int y) {
    return x + y;
}

int calculateLeastCommonMultiple(int numberOne, int numberTwo) {
    int x = 1;
    while (x % numberOne != 0 || x % numberTwo != 0) {
        x++;
    }
    
    return x;
}


int main() {
    int x = 5;
    cout << "x = " << x << endl;
    x = calculateLeastCommonMultiple(x, 12);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    // you can override global variables by creating another one in a smaller scope
    int y = 3;
    cout << "y = " << y << endl;
    return 0;
}