#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int flag=0,temp,i,n,k;
		cin>>n>>k;
		for (i=n;i<k;i++)
		{
			long long int reverse = 0;
			temp = i;
			while(temp!=0)
			{
				reverse = reverse*10;
				reverse = reverse+temp%10;
				temp = temp/10;
			}
			if(i==reverse)
			{
				flag = flag+i;
			}
		}
		cout<<flag<<endl;	
	}
	return 0;
}
