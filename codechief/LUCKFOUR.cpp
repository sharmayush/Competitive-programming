#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;		
		{
			while(n!=0)
			{
				if(n%10==4)
				{
					flag++;
				}
				n = n/10;
			}
		}
		cout<<flag<<endl;
	}
	return 0;
}
