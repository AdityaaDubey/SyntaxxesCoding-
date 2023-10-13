//WAP to print the string even it contain space between the string.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    
    // Asking the user for input
    cout << "Enter your name: ";
    
    // Taking user input as a string
    getline(cin, userInput);
    
    // Printing the user input
    cout << "Hello, " << userInput << "! Nice to meet you!" << endl;
    
    return 0;
}
