#include <iostream>

using namespace std;

void addOneToArrayAndPrint(int arr[], int size) {
    for (int i; i < size; i++) {
        arr[i] += 1;
    }

    std::cout << "The array is now " << std::endl;
    for (int i = 0; i < 3; i++) {
        cout << endl << arr[i];
    }
}

void addOneAndPrint(int n) {
    n++;
    cout << "The value is now: " << n << endl;
}


int main() {
    int x = 5;
    std::cout << std::endl << "The value of x is: " << x << std::endl;
    addOneAndPrint(x); // **passes value of x, not the box itself**
    std::cout << std::endl << "The value of x after is: " << x << std::endl;

    // arrays are a little different, in that the array does get changed by the function
    int myArray[3] = {2, 4, 6};

    

    cout << endl << "The value of myArray before is: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << endl << myArray[i];
    }
    cout << endl;

    addOneToArrayAndPrint(myArray, 3);
    cout << endl << "The value of myArray after is: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << endl << myArray[i];
    }
    cout << endl;

    // int myArray[10] = {0,2,4,6,8,10,12,14,16,18}; // declare array of 10 elements, uninitialized element places are random
    // myArray[0] = 5;
    // myArray[5] = 2;

    // std::cout << "The thing at index 0 is: " << myArray[0] << std::endl;
    // std::cout << "The thing at index 5 is: " << myArray[5] << std::endl;
    // std::cout << "The thing at index 4 is: " << myArray[4] << std::endl;

    // array traversal
    // for (int i; i < 10; i++) {
    //     std::cout << myArray[i] << std::endl;
    // }
    
    // const int SIZE = 5;
    // int numbers[SIZE];

    // std::cout << "Enter " << SIZE << " numbers:" << std::endl;
    // for (int i = 0; i < SIZE; i++) {
    //     std::cout << "Number " << (i + 1) << ": ";
    //     std::cin >> numbers[i];
    // }

    // for (int i = 0; i < SIZE; i++) {
    //     std::cout << "Number " << (i + 1) << ": " << std::endl;
    //     std::cout << numbers[i] << std::endl;
    // }
    return 0;
}