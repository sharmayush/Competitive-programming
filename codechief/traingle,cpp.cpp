#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c,sum=180;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(sum==a+b+c)
		{
			cout<<YES<<endl;
		}
		else
		cout<<NO<<endl;
	}
return 0;
}

