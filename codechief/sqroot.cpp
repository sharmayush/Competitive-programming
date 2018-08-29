#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t,i,r;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		if(n!=0)
		{
		r=sqrt(n);
		cout<<r<<endl;
		}
		else
		{
			r=sqrt(n);
			cout<<r-1<<endl;
		}
	}
}
