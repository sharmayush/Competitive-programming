#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t,i,a,b,temp,n,m;
	cin>>t;
	while(t--)
	{
		temp=0;
		cin>>n>>m;
		if(n%2!=0)
		{
			for(i=0;i<m;i++)
			{
				cin>>a>>b;
				//arr[a-1]++;
			//	arr[b-1]++;
			}
			temp=0;
		}

		else
		{
			ll arr[n]={0};
			for(i=0;i<m;i++)
			{
				cin>>a>>b;
				arr[a-1]++;
				arr[b-1]++;
			}
			for(i=0;i<n;i++)
			{
				if(arr[i]==1)
				temp++;
			}

		}
		if((n-temp)%2==0)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
}
