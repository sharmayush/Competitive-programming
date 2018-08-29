#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		long int quot,rem,div,dnd,temp;
		cin>>dnd;
		cin>>div;
		while(div<dnd||rem!=0)
		{
		quot=dnd/div;
		rem=dnd%div;
		dnd=div;
		div=rem;
		}
		cout<<div<<endl;
	}	
	return 0;
}
