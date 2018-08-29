#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int k,P,B,n;
		double min,max;
		cin>>n>>k;
		if(n<k)
		{
	 		P=pow(k,2);
	 		B=pow(n,2);
	 		min=P-B;
	 		max=P+B;
	 		min=sqrt(min);
	 		max=sqrt(max);
	 		cout<<min<<" "<<max<<" "<<endl;
		}
	}
	return 0;
}
