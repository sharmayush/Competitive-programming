#include<iostream>
using namespace std;

int main()
{
	int t,n,k,i,j;
	char d,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		char a[n];
		char b[k];
		int temp=0;
		for(i=0;i<n;i++)
		{
			cin>>d;
		    a[i]=d;
		}
		for(j=0;j<n;j++)
		{
			cin>>l;
			b[j]=l;
		}
		for(i=0;i<n;i++)
		{
			if (a[i]==b[i])
			{
				temp++;
			}
		}
		if(temp==n)
			{
				cout<<"yes"<<endl;
			}
		else 
			cout<<"no"<<endl;	
	}
	return 0;
}
