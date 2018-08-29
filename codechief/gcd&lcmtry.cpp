#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k;
		long int temp=1,lcm;
		cin>>n>>k;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0&&k%i==0&&i>temp)
			{
				temp=i;
			}
		}
		lcm=n*k;
		lcm=lcm/temp;
		cout<<temp<<" "<<lcm<<endl;
	}
	return 0;
}
