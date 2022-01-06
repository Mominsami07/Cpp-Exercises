

// Write a program to print the circumference and area of a circle of radius entered by user by defining your own Functions.

#include<iostream>
using namespace std;
float area(float);
float circum(float);
int main()
{
        int radius;   
        cout<<"\n Enter Radius of Circle: ";
        cin>>radius;
        cout<<"\n Area of Circle : "<<area(radius);
        cout<<"\n Circumference of Circle : "<<circum(radius);
        return 0;
}
float area(float radius)
{
        return (3.14 * radius * radius);
}
float circum(float radius)
{
        return(2 * 3.14 * radius);
}
