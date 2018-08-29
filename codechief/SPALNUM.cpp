#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,n,k,t;
	cin>>t;
	while(t--)
	{
		int result;
		cin>>n>>k;
		for(i=n;i<=k;i++)
		{ 
			int temp1=0;
			int flag=0;
			while(n!=0)
			{
				temp1 = temp1*10;
				temp1 =temp1+n%10;
				n=n/10;
			}
			if(i==temp1)
			{
				flag = flag+i;
			}
			result = flag;
		}
	cout<<result<<endl;
	}
return 0;
}

