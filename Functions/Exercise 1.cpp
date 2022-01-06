// Define two Functions to print the maximum and the minimum number respectively among three numbers entered by the user.

#include <iostream>
using namespace std;

int smallest (int first, int second, int third)
{
  int min = first;
  if (second < min)
    {
      min = second;
    }
  if (third < min)
    {
      min = third;
    }
  return min;
}




int largest (int first, int second, int third)
{
  int max = first;
  if (second > max)
    {
      max = second;
    }
  if (third > max)
    {
      max = third;
    }
  return max;
}

int main()
{
    int n1,n2,n3;
    cout<<"Enter 3 integers: ";
    cin>>n1>>n2>>n3;
    cout << "\n\n The Smallest number among ( " << n1 << ", " << n2 << ", " << n3 << " ) is : " << smallest(n1,n2,n3);
    cout << "\n\n The Largest number among ( " << n1 << ", " << n2 << ", " << n3 << " ) is : " << largest(n1,n2,n3);

    return 0;
}

