
// A person is eligible to vote if his/her age is greater than or equal to 18. Define a Function to find out if he/she is eligible to vote.

#include<iostream>
using namespace std;

void CheckAge (int age)
{
    if (age >= 18)
    {
        cout << "You are eligible for voting";
    } 
    else
    {
        cout << "You are not eligible for voting";
    }
}
int main() {

    int age;
    cout << "Enter age of a user:";
    cin>>age;
    CheckAge (age);
    return 0;
}
