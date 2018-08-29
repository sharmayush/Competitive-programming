#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],value,count=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				
				i++;
			}
			else
			cout<<a[i]<<endl;
		}
	
	}
	return 0;
}

