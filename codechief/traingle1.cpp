#include<iostream>
using namespace std;
int main()
{
	long int t,a,b,c,i,sum=180;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>a>>b>>c;
		if(a>0 && b>0 && c>0 && sum==a+b+c)
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
return 0;
}
