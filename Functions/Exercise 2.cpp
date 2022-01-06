
// Define a program to find out whether a given number is even or odd.


#include <iostream>
using namespace std;

bool isEven(int n) {
    return (n % 2 == 0);
    }

int main()
{
    int n;
    cout<<"Enter a number to check whether it is Even or Odd: ";
    cin>>n;
    isEven(n) ? cout << "Even" : cout << "Odd";

    return 0;
}
