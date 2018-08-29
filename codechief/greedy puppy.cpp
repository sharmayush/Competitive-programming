#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int coin,p,k,i,b;
		cin>>coin;
		cin>>p;
		int a[p];
		for(i=1;i<=p;i++)
		{
			a[i-1]=coin%i;	
		}
		sort(a,a+p);
		cout<<a[p-1]<<endl;
	}
	return 0;
}
