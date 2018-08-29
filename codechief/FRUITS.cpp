#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m,k,temp,diff;
		cin>>n>>m>>k;
		if(n<m && n!=k && m!=k)
		{
			for(i=k;i>=1;i--)
			{
				n=n+1;
				if(n!=m)
				{
					continue;
				}
				else if(n==m)
				{
					break;
					
				}
			}
			if(n!=m)
			{
				diff=m-n;
				cout<<diff<<endl;
			}
			else if(n==m)
			{
				break;
				return 0;
			}
		}
		else if(n>m && m!=k && n!=k)
		{
			
			if(m!=n)
			{
				diff=n-m;
				cout<<diff<<endl;
			}
			else if(m==n)
			{
				break;
				return 0;
			}			
		}
	}
	return 0;
}
