#include <iostream>

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

    return 0;
}
