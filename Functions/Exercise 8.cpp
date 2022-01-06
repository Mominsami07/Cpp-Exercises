
// Write a program that will ask the user to enter his/her marks (out of 100). Define a method that will display grades according to the marks entered as below:
// Marks        Grade 
// 91-100         AA 
// 81-90          AB 
// 71-80          BB 
// 61-70          BC 
// 51-60          CD 
// 41-50          DD 
// <=40          Fail 

#include<iostream>
using namespace std;

void grade(int avg)
{
    switch(avg/10)
    {
        default:
        cout<<"FAIL!";
        break;
        case 4:
        cout<<"DD";
        break;
        case 5:
        cout<<"CD";
        break;
        case 6:
        cout<<"BC";
        break;
        case 7:
        cout<<"BB";
        break;
        case 8:
        cout<<"AB";
        break;
        case 9:
        cout<<"AA";
        break;
    }
}
int main()
{
    int numOfsubjects;
    float mark, sum=0, avg;
    cout<<"Enter number of Subjects: ";
    cin>>numOfsubjects;
    cout<<"Enter Marks of 5 Subject\n";
    for(int i=0; i<numOfsubjects; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/numOfsubjects;
    cout<<"\nToatal Marks: "<<sum<<endl;
    cout<<"Average: "<<avg;
    cout<<"\nGrade = ";
    grade(avg);

    return 0;
}
