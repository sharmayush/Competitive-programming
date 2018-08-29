#include<iostream>
using namespace std;

int main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{ 
		int temp;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]%2!=0)
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
			else if (a[i+1]%2!=0 && a[i+1]>a[i])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;
}
