#include <iostream>

using namespace std;
char square[9]={'0','1','2','3','4','5','6','7','8'};

// To check the winner player
int checkwin()
{
		if(square[0]==square[1]&&square[1]==square[2])
		{	if(square[0]=='X')			
			return 1;
			else
			return 2; 
		}		
		else
		if(square[3]==square[4]&&square[4]==square[5])
			{	
			if(square[3]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[6]==square[7]&&square[7]==square[8])
			{	
			if(square[6]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[0]==square[3]&&square[3]==square[6])
			{	
			if(square[0]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[1]==square[4]&&square[4]==square[7])
			{	
			if(square[1]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[2]==square[5]&&square[5]==square[8])
			{	
			if(square[2]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[0]==square[4]&&square[4]==square[8])
			{	
			if(square[0]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[2]==square[4]&&square[4]==square[6])
			{	
			if(square[2]=='X')			
			return 1;
			else
			return 2; 
		}
		else
		if(square[0]==square[3]&&square[3]==square[6])
			{	
			if(square[0]=='X')			
			return 1;
			else
			return 2; 
		}
		else 
		return 0;
}

// Player remarks
void mark(int player,int box)
{
	if(player==1)
	{
	   square[box]='X';
	}
	else
	   square[box]='Y';
}

// Display function 
void display()
{
		for(int i=0;i<9;i++)
		{
			cout<<square[i]<<"\t" ;
				if(i==2||i==5||i==8)
					cout<<"\n"; 
			}
}

int main()
{
	// Players input display
	string player1="",player2 ="";
	cout<<"\t=== Welcome to TIC-TAC-TOE GAME===\n"<<endl;
	cout<<"Enter the name of 1st player: ";
	getline(cin,player1);
	cout<<"Enter the name of 2nd player: ";
	getline(cin,player2);
	cout<<endl<<player1<<" is player1 so he/she will play first "<<endl;
	cout<<player2<<" is player2 so he/she will play second \n"<<endl;
	
	// Draw tic toc tie board & pattern
	cout<<"\t   |    |   "<<endl;
	cout<<"\t "<<square[0]<<" |  "<<square[1]<<" |  "<<square[2]<<"  \n";
	cout<<"\t___|____|___"<<endl;
	cout<<"\t   |    |   "<<endl;
	cout<<"\t "<<square[3]<<" |  "<<square[4]<<" |  "<<square[5]<<"  \n";
	cout<<"\t___|____|___"<<endl;
	cout<<"\t   |    |   "<<endl;
	cout<<"\t "<<square[6]<<" |  "<<square[7]<<" |  "<<square[8]<<"  \n";
	cout<<"\t   |    |   "<<endl;
	
		int box, result=0, flag=0;
		int p1=1,p2=2;
		
		// Display Winning Player
		for(int i=1;i<5;i++)
		{
		  cout<<"\n Player "<<player1<<" Enter the Box ";
		  cin>>box;
		  mark(p1,box);
		  display();
		  result=checkwin();
		  if(result==1)
		  {
		    cout<<"\n Congratualtions! player "<<player1<<" has Won ";
			flag=1;			
			break;
			}
			else if(result==2)
			{	
		      cout<<"\n Congratualtions! player "<<player2<<" has Won ";
			  flag=1;			
			  break;
			  }

		cout<<"\n Player "<<player2<<" Enter the Box ";
		cin>>box;
		mark(p2,box);
		display();
		result=checkwin();	
		if(result==1)
		{	
		    cout<<"\n Congratualtions! player "<<player1<<" has Won ";
			flag=1;
			break;
			}
			else if(result==2)
			{
			  cout<<"\n Congratualtions! player "<<player2<<" has Won ";
			  flag=1;
			  break;
			  }
		}
		if(flag==0)
		  cout<<" \n Sorry, The game is a draw ";
	
	return 0;
}





