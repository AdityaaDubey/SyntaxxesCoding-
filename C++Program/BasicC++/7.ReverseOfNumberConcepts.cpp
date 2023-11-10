/* Wap to find reverse of a number  */

#include <iostream>
using namespace std;
 
int main() 
{
  int num , rev=0;
   
   cout<<" Enter Number:"<<endl;
   cin>> num;
   
   while(num>0)
   {
      rev = (rev*10)+num%10;   
       num= num/10;
   }
   cout<< " Now Reverse of the number is:"<<rev;
    return 0;
}


// --------------------------------------------------------------------------------------------------------------------------------------------------------------4
// Recursive approch :-his function works by recursively dividing the number by 10 and multiplying the remainder by 10, adding the result to the reversed number.
//The function terminates when the number is 0.

#include <iostream>
using namespace std;

int reverse(int n);

int main() {
  int n;

  cout << "Enter Number:" << endl;
  cin >> n;

  int reversed_number = reverse(n);
  cout << "Reverse: " << reversed_number << endl;

  return 0;
}

int reverse(int n) {
  if (n == 0) {
    return 0;
  } else {
    int reversed_number = reverse(n / 10);
    return (n % 10) * 10 + reversed_number;
  }
}
