#include<iostream>
using namespace std;
int main()
{
	long int t,n,i;
	cin>>t;
	if(t>=1&&t<=1000)
	{
	for(i=1;i<=t;i++)
	{
		cin>>n;
		if(n<10)
		{
			cout<<"What an obedient servant you are!"<<endl;
		}
		else
		cout<<"-1"<<endl;
	}
}
return 0;
}
