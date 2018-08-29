#include<iostream>
using namespace std;
 
int main()
{
	long int n,t,i,count=0;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		if(n>=100)
		{
		count=count+n/100;
		n=n%100;
		if(n>=50)
		{
			count=count+n/50;
			n=n%50;
		if(n>=10)	
		{
			count=count+n/10;
			n=n%10;
		if(n>=5)
		{
			count=count+n/5;
			n=n%5;
		if(n>=2)
		{
			count=count+n/2;
			n=n%2;	
		if(n==1)
		{
			count=count+n/1;	
		}	
	}
	}	
	}
	}
	}
	cout<<count<<endl;
	}
	return 0;
}
