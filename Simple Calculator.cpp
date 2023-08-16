#include <iostream>

using namespace std;

int main() 
{
  // Declare variables.
  float num1, num2;
  char operation;

  // Get input from the user.
  cout<<"\t======CALCULATOR======\n"<<endl;
  cout<<"\tEnter 1st numbers: ";
  cin>>num1;
  cout<<"\tEnter 2nd number: ";
  cin>>num2;
  cout<<"\tEnter an operation (+, -, *, /): ";
  cin>>operation;

  // Perform the operation.
  switch(operation) 
  {
    case'+':
         cout<<"\n\tSum of "<<num1<<"+"<<num2<<"= "<<num1+num2<<endl;
      break;
    case'-':
         cout<<"\n\tSubtract of "<<num1<<"-"<<num2<<"= "<<num1-num2<<endl;
      break;
    case'*':
         cout<<"\n\tMultiply of "<<num1<<"*"<<num2<<"= "<<num1*num2<<endl;
      break;
    case'/':
    	{
    	 if(num2!=0)
         cout<<"\n\tDivision of "<<num1<<"/"<<num2<<"= "<<num1/num2<<endl;
         else
         cout<<"\n\tError!! "<<endl;
        }
      break;
    default:
         cout<<"Invalid operation."<<endl;
  }

  return 0;
}
