#include<iostream>
using namespace std;
int main()
{
	long int t,i;
	cin>>t;
	while(t--)
	{
		long int n,temp,count=0,b=0,mode;
		cin>>n;
		temp=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	for(i=1;i<=count;i++)
	{
		mode=temp%10;
		b=b*10+mode;
		temp=temp/10;
	}
	cout<<b<<endl;
	}
}
