#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() 
{
  // Rendom number between 1 to 100 
  srand(time(NULL));
  int random_number=rand()%100+1;
  
  cout<<"\t====Number Guessing====\n"<<endl;
  int guess; 
  do {
    cout<<"Enter your guess no. (1 to 100): ";
    cin>>guess;

    // Check if condition
    if(guess==random_number) 
	{
      cout<<"\nCongratulations! You guess the correct number!"<<endl;
      break;
    } 
	else if(guess>random_number) 
	{
      cout<<"Your number is too high."<<endl;
    } 
	else 
	{
      cout<<"Your number is too low."<<endl;
    }
  }while(true);

  return 0;
}
