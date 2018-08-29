#include<iostream>
 using namespace std;

int main()
{
	int t,i,j,sum;
	cin>>t;
	for(i=2,j=t;i<=t,j>=i;i++,j--)
	{
		if(t%i==0&&t%j==0)
		{
			break;
		}
		
	}
	if(i==i&&j==j)
	{
		sum= i+j;
	}
	return 0;
}
