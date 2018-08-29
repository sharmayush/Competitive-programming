#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	if(t>=1&&t<=10)
	{
	while(t--)
	{
		long int n,i,a,count=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a;
			if(a%2!=0)
			{
				count++;
			}
		}
			cout<<count<<endl;
	}
	return 0;
	}
}
