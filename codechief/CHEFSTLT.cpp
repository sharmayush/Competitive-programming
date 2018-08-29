#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string i;
		string j;
		int len1,len2,cmp;
		cin>>i>>j;
		len1=i.length();
		len2=j.length();
		if(len1==len2)
		{
			cmp=strcmp(i,j);
			cout<<cmp<<endl;
		}
	}
}
