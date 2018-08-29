#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int A,B;
		cin>>A>>B;
		if(A<B)
		{
			cout<<"<"<<endl;
		}
		else if(A>B)
		{
			cout<<">"<<endl;
		}
		else if(A=B)
		{
			cout<<"="<<endl;
		}
	}
	return 0;
}
