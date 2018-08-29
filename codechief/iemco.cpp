#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int t;
    cin>>t;
    if(t<=100&&t>=1)
    {
        while(t--)
        {
            long long int n,k,i=0,flag=0,p=0;
            string s;
            char c;
            cin>>n>>k;
            if(n>=1&&n<=1000&&k>=1&&k<=1000)
            {
                cin>>s;
                while(s[i])
                {
                    c = s[i];
                    if(islower(c))
                    {
                        flag++;
                    }
                    i++;
                }
                if(flag==n)
                {
                    for(i=0;i<n;i++)
					{
						if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
						{
	               			p++;
						}
					}
					if (p>k)
					{
						cout<<"Good"<<endl;
					}
					else
					cout<<"Bad"<<endl;
                }
            }
        }
    }
}
