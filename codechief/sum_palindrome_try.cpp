#include<iostream>
using namespace std;

int main()
{
	long int t,i,n,a,b;
	cin>>t;
	while(t--)
	{
		long int temp=0,m;
		cin>>a;
		cin>>b;
		for(i=a;i<=b;i++)
		{
			while(i!=0)
			{
				a=i%10;
				n=i/10;
				temp=temp*10+a;
			}
			if(temp==m)
		{
			cout<<"wins"<<endl;
		}
		else
		cout<<"  "<<endl;
	}
	return 0;
}

