#include<iostream>
using namespace std;
int main()
{
	long int a,b,c;
	int t;
	cin>>t;
	if(t>=1&&t<=1000)
	{
	while(t--)
	{
		cin>>a>>b>>c;
		if(a<c&&a>b||a>c&&a<b)
		{
			cout<<a<<endl;
		}
		else if(b<c&&a>b||b>c&&b<a)
		{
			cout<<b<<endl;
		}
		else
		cout<<c<<endl;
	}
}
	return 0;
}
