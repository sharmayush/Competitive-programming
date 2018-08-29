#include<iostream>
using namespace std;

int main()
{
	long int n,m,t,sum;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n>m)
		{
			cout<<n<<endl;
		}
		else
		cout<<m<<endl;
		sum=n+m;
		cout<<sum<<endl;
	}
	return 0;
}
