#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	long int t,n,temp;
	cin>>t;
	string s;
	while(t--)
	{
		int i;
		cin>>s;
		for(i=0;i<s.length()-1;i++)
		{
			if(s[i]=='C'&&s[i]!='E'&&s[i]!='S')
			{
				if(s[i]==s[i+1])
				continue;
				
			}
			else if(s[i]=='E')
			{
				if(s[i+1]=='E'||s[i+1]=='C')
				continue;
			}
			else if(s[i]=='S'||s[i+1]!='E'&&s[i+1]!='C')
			{
				continue;
			}
			else
			break;
		}	
		if(i==s.length()-1)
		{
			cout<<"yes"<<endl;
		}
		else
		cout<<"no"<<endl;
	}
}
