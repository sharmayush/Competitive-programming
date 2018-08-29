#include <iostream>
using namespace std;
int main() {
	long int t,i,a,b,n,c,flag=0;
		cin>>t;
		for(i=1;i<=t;i++)
		{
			cin>>n;
			b=n%10;
			while(n!=0)
			{ 
				n=n/10;
			}
		cout<<b<<endl;
		}
	return 0;
} 
