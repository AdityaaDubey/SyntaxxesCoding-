//WAP to print the string even it contain space between the string.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    
    // Asking the user for input
    cout << "Enter your name: ";
    
    // Taking user input as a string: getline() reads a line from the input stream until a newline character ('\n') is encountered and stores it in the given string variable.
    getline(cin, userInput);
    
    // Printing the user input
    cout << "Hello, " << userInput << "! Nice to meet you!" << endl;
    
    return 0;
}
