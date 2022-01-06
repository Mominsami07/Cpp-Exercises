
// Write a program to print the factorial of a number by defining a Function named 'Factorial'.

#include<iostream>
using namespace std;

float factorial2(int n);
float factorial1(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial1(n)<<endl;
    cout << "Factorial of " << n << " = " << factorial2(n)<<endl;

    return 0;
}

//Using for loop (try to make it with while loop as a task )
float factorial1(int n)
{
    float fact=1;
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i; 
        }
        return fact;
    }
    else
    return 1;
}

//Using Recursion
float factorial2(int n)
{
    if(n > 1)
        return n * factorial2(n - 1);
    else
        return 1;
}
