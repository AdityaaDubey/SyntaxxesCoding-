#include <iostream>

int main() {
    // Declare variables for length and width of the rectangle
    double length, width;

    // Prompt user for input
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    // Calculate the area of the rectangle
    double area = length * width;

    // Display the result
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
