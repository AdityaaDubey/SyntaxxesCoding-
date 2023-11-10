//Type 1:- WAP to calculate the length of a string WITHOUT using INBUILD funtion.


#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring and initializing a string variable
    string greeting = "Hello, World!";
    
    // Concatenating strings
    string name = "Alice";
    string message = greeting + " My name is " + name;
    cout << message << endl;

    int count = 0;
    int i = 0;  // Initialize i to 0

    // Loop through the characters of the string until you encounter the null character
    while (message[i] != '\0') {
        count += 1;
        i++; // Increment i to move to the next character
    }

    cout << "Length of message: " << count << endl;
    return 0;
}



//========================================================================================================================================================
//Type 2:-  Using  INBUILD function.

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring and initializing a string variable
    string greeting = "Hello, World!";
    
    // Concatenating strings
    string name = "Alice";
    string message = greeting + " My name is " + name;
    
    // Getting the length of the string
    int length = message.length();
    
    // Printing the string and its length
    cout << message << endl;
    cout << "Length: " << length << endl;
    
    return 0;
}


