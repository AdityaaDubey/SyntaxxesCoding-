//WAP to check NUmber is prime or not ?

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, i;

    cout << "Enter a Number N =" << endl;
    cin >> N;

    if (N >= 2) {
        bool isPrime = true;
        for (i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "Entered Number is Prime : " << endl;
        } else {
            cout << "Entered Number is not prime : " << endl;
        }
    } else {
        cout << "Invalid Number : " << endl;
    }

    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------

//WAP to print all the prime number in the range 1 to n




    
