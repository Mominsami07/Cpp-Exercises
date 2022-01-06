
// Program to add two numbers using function in C++

#include <iostream>
using namespace std;

//function declaration
int addition(int a,int b);

int main()
{
	int num1;
	int num2;	

	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	cout<<"Addition is: "<<addition(num1,num2)<<endl;
	
	return 0;
}

//function definition
int addition(int a,int b)
{
	return (a+b);
}
