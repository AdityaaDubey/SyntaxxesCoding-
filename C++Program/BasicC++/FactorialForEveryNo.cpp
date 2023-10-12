// Type 1:- 
/*Calculate the factorial of a non-negative integer using recursion..  
The base case is when n is 0 or 1; the factorial is 1 in these cases. (0!=1!=1)
  n!=n×(n−1)×(n−2)×…×2×1  */
// when the value of 'n' is NOT so large.

#include<iostream>

using namespace std;

long long factorial(int n)
{ 
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
} 

int main()
{
    int n;
    cout << "Enter a number N to find factorial: " << endl;
    cin >> n;

    if(n < 0)
    {
        cout << "The Number is negative" << endl;
    }
    else 
    {
        long long result = factorial(n);
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Type 2:-
  /*The #include <boost/multiprecision/cpp_int.hpp> line includes the specific header file required for using arbitrary-precision integers (cpp_int)
provided by the Boost Multiprecision library.
This header file contains the declarations and definitions necessary to work with cpp_int data type.
Unlike standard C++ integer types (int, long long, etc.), cpp_int can handle very large integers without overflow issues.
It dynamically allocates memory to store integers of any size, allowing you to perform calculations with extremely large numbers.*/

  // Value of 'n' is large enough.
  
  #include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int factorial(int n)
{ 
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
} 

int main()
{
    int n;
    cout << "Enter a number N to find factorial: " << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "The Number is negative" << endl;
    }
    else 
    {
        cpp_int result = factorial(n);
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}
