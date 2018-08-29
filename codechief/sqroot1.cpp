#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long int t,n,k,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int temp;
		cin>>n;
		for(i=1,temp=pow(i,2);i<=20;i++)
		{
		if(n==temp*temp)
		{
			cout<<i<<endl;
		}
			else if(n!=temp*temp) 
			{
				k=pow(i-1,1);
				cout<<k<<endl;
			}
		}
	}
	return 0;
}
