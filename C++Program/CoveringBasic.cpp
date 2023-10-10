/*(This header #include<bits/stdc++.h> includes all the standard C++ headers, making it convenient for competitive programming and quick coding
but It's a GNU extension that is supported by some compilers like GCC (GNU Compiler Collection)*/
#include<bits/stdc++.h>
//#include <iostream.h>

/*The line using namespace std;  is used in C++ to indicate that you want to use the standard C++ namespace (std)
without having to prepend it to every identifier from the standard library. */

using namespace std;

int main() {
    // Declare variables for the length and width of the rectangle
    double length, width;

    // Prompt user for input
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Calculate the area of the rectangle
    double area = length * width;

    // Display the result
    cout << "Area of the rectangle: " << area << std::endl;

    //Indicates that the program executed successfully and returns 0 to the operating system.
    return 0;
}
