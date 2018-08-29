#include<iostream>
using namespace std;

int main()
{
	long int t,A,B,a,n,j,sum;
	cin>>t;
	while(t--)
	{
		cin>>A>>B;
		sum=0;
		for(j=A;j<=B;j++)
	{
		int temp=0;
		n=j;
		while(j!=0)
		{
			a=j%10;
			temp=temp*10+a;
			j=j/10;
		}
		if(j==temp)
		{
			sum=sum+j;
		}
	}
	}
	cout<<sum<<endl;
	return 0;
}
