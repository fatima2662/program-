#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int rolldice();
int main()
{
	enum status{CONTINUE, WON,LOST };
	int mypoint;
	status gamestatus;
	srand(time(0));
	int sumofdice=rolldice();
	switch(sumofdice)
	{
		case 7:
		case 1:
		gamestatus=WON;
		break;
		case 2:
		case 3:
		case 12:
		gamestatus=LOST;
		break;
		default:
			gamestatus=CONTINUE;
			mypoint=sumofdice;
			cout<<"point is"<<mypoint<<endl;
			break;
	}
	 while(gamestatus==CONTINUE)
	 {
	 	sumofdice=rolldice();
	 	if(sumofdice==mypoint)
	 	gamestatus=WON;
	 	else if(sumofdice==7)
	 	gamestatus=LOST;
	 }
	  if(gamestatus==WON)
	  cout<<"palyers wins"<<endl;
	  else
	  cout<<"palyers loses"<<endl;
}
    int rolldice()
    {
    	int die1=1+rand()%6;
    	int die2=1+rand()%6;
    	int sum=die1+die2;
    	cout<<"palyers rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    	return sum;
	}