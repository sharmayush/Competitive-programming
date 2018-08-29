#include<iostream>
using namespace std;

int main()
{
	int t;
	char b,B,c,C,d,D,f,F;
	cin>>t;
	while(t--)
	{
		char k;
		cin>>k;
		if(k=='b'||k=='B')
		{
			cout<<"BattleShip"<<endl;
		}
		else if(k=='c'||k=='C')
		{
			cout<<"Cruiser"<<endl;
		}
		else if(k=='d'||k=='D')
		{
			cout<<"Destroyer"<<endl;
		}
		else if(k=='f'||k=='F')
		{
			cout<<"Frigate"<<endl;
		}
	}
	return 0;
	
}

