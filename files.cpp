#include <iostream>
#include <fstream> // header file for file or file stream operations

int main() {
    // std::ofstream outputFile; // create outfile file stream object, output from program to file
    // outputFile.open("README.md");

    // for (int i = 1; i <= 10; i++) {
    //     outputFile << i << std::endl; // OVERRIDES, and writes the number and a newline to file
    // }

    // outputFile.close();
    // std::cout << "Done writing to file." << std::endl;


    std::ifstream inputFile;
    inputFile.open("README.md");
    int number;

    // standard C++ pattern for reading a file until the end
    while (inputFile >> number) // takes stuff from inputFile and puts it into number, the condition is if there is something to put into number
    {
        std::cout << number << std::endl;
    }
    inputFile.close();

    return 0;
}