//Ques- Write a C++ program to check the upper and lower limits of integers.

#include <iostream.h>
/*<limits.h> is a C standard library header file that provides information about the implementation-specific properties of the integral types supported by the system and their limits. 
It defines macros that represent the minimum and maximum values for various integral types, such as int, long, long long, etc.*/
#include <limits.h>

using namespace std; // Using the std namespace for convenience

int main() {
 // cout << "Upper Limit of int: " << numeric_limits<int>::max() "\n"; // we can also use "\n" in the End for new line instead of endl.
    cout << "Upper Limit of int: " << numeric_limits<int>::max() << endl;
    cout << "Lower Limit of int: " << numeric_limits<int>::min() << endl;
    cout << "Upper Limit of long: " << numeric_limits<long>::max() << endl;
    cout << "Lower Limit of long: " << numeric_limits<long>::min() << endl;
    cout << "Upper Limit of long long: " << numeric_limits<long long>::max() << endl;
    cout << "Lower Limit of long long: " << numeric_limits<long long>::min() << endl;

    return 0;
}


/*Output:- 
Upper Limit of int: 2147483647
Lower Limit of int: -2147483648
Upper Limit of long: 9223372036854775807
Lower Limit of long: -9223372036854775808
Upper Limit of long long: 9223372036854775807
Lower Limit of long long: -9223372036854775808*/

