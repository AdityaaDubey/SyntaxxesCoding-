/*  Why this is so important ?

1.Problem Solving: Creating patterns challenges you to think step by step, improving your problem-solving skills.

2.Loop Mastery: Patterns often use loops, helping you get really good at using them to repeat actions efficiently.

3.Nested Structures: Complex patterns involve layers, helping you practice managing multiple levels of complexity in your code.

4.Seeing Results: You learn to imagine what your code will create visually, helping you catch mistakes and understand how your code works.

5.Job Interviews: Employers often ask you to create patterns in interviews, testing your ability to solve problems and write clear code.

 Type 1:- Start with basic Pattern Program..
                
                * 
                * * 
                * * * 
                * * * * 
                * * * * *                                                                                                                                                  */



// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
int main() {
    int n ,i,j;
  cout << "Enter the Number of level Yount to print :";
  cin >> n;
  
  for( i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

/*=======================================================================================================================================================================
 Type 2:- 


  */
