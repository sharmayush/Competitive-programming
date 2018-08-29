#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,temp=0,sum,i,j,flag=0;
		cin>>n>>k;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=k;j++)
			{
				temp=temp+j;
			}
			flag=flag+temp;
		}
		cout<<flag<<endl;
	}
	return 0;
}
