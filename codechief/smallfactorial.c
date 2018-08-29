#include<iostream>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int n,temp=1;
		if(n>=0&&n<=20)
		{
		cin>>n;
		while(n--)
		{
			temp=temp*n;
		}
		cout<<temp<<endl;
		}
	}
	return 0;
}
