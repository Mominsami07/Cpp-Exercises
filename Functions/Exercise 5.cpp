
// Define a Function that returns the product of two numbers entered by user.

#include <iostream>
using namespace std;

//function declaration
int product(int a,int b);

int main()
{
	int num1;
	int num2;	

	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	cout<<"Product is: "<<product(num1,num2)<<endl;
	
	return 0;
}

//function definition
int product(int a,int b)
{
	return (a*b);
}
