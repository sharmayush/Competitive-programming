#include<iostream>
using namespace std;
 
int main()
{
	long int t,i,n,a;
	cin>>t;
	while(t--)
	{
		long int temp=0,m;
		cin>>n;
		m=n;
		while(n!=0)
		{
			a=n%10;
			n=n/10;
			temp=temp*10+a;
		}
		if(temp==m)
		{
			cout<<"wins"<<endl;
		}
		else 
		cout<<"losses"<<endl;
	}
	return 0;
}

