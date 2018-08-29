#include<iostream>
using namespace std;

int main()
{
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
		int count=1,temp=0,j;
		int a[temp];
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				temp++;
			}		
		}
		cout<<temp;	
		for(i=0;i<temp;i++)
		{
			
		}
	}
	return 0;
}
