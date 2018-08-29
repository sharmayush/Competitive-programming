#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int t,n,k,i,player1=0,player2=0;
	cin>>t;
	long int a[t];
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		if(n>k)
		{
			a[i]=n-k;
			player1=player1+a[i];			
		}
		else if(n<k)
		{
			a[i]=k-n;
			player2=player2+a[i];		
		}									
	}
	sort(a,a+t);
	if(player1>player2)
	{
	cout<<"1"<<" "<<a[t-1]<<endl;	
	}
	else
	cout<<"2"<<" "<<a[t-1]<<endl;
	return 0;
}
