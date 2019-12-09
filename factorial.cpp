/*
This progarm calculates the factorial of a number using recursion
*/
#include<iostream>

using namespace std;

//function declaration
int fact(int);

int main()
{
int num;
cout<<"Enter number\n";
cin>>num;

if(num<0)
{
  cout<<"invalid input"<<endl;
  return -1;
}

cout<<"The factorial of "<<num<<" is "<<fact(num)<<"\n";
return 0;

}

// Recursive function for calculating factorial of a number
int fact(int num)
{

  if((num ==1) || (num ==0))
    return 1;

  return num * fact(num-1);



}
