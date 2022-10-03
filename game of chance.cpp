#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int rolldice();
int main()
{
	enum status{continue, won,lost};
	int mypoint;
	status gamestatus;
	srand(time(0));
	int sumofdice=rolldice();
	switch(sumofdice)
	{
		case 7:
		case 1:
		gamestatus=won;
		break;
		case 2:
		case 3:
		case 12:
		gamestatus=lost;
		break;
		default:
			gamestatus=continue;
			mypoint=sumofdice;
			cout<<"point is"<<mypoint<<endl;
			break;
	}
	 while(gamestatus==continue)
	 {
	 	sumofdice=rolldice();
	 	if(sumofdice==mypoint)
	 	gamestatus=won;
	 	else if(sumofdice==7)
	 	gamestatus=lost;
	 }
	  if(gamestatus==won)
	  cout<<"palyers wins"<<endl;
	  else
	  cout<<"palyers loses"<<endl;
}
    int rolldice()
    {
    	int die1=1+rand()%6;
    	int die2=1+rand()%6;
    	int sum=die1+die2;
    	cout<<"palyers rolled"<<die<<"+"<<die2<<"="<<sum<<endl;
    	return sum;
	}