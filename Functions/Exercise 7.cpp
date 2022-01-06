//Define a Function to find out if a number is prime or not.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
    int n;
    cout<<"Enter a number to chech if it is prime or not: ";
    cin>>n;
	isPrime(n) ? cout <<n <<" is Prime\n" : cout <<n <<" is not Prime" ;
	return 0;
}
