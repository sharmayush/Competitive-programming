#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,count=0;
        char s[3];
        cin>>n;
        cin>>s;
        for(long long int i=0;i<3;i++)
        {
            if(s[i]=='R'&&s[i+1]=='B'||s[i]=='B'&&s[i+1]=='R')
            {
                s[i]='G';
                s[i+1]=s[i+2];
                count++;
                if(s[i]==s[i+1])
                {
                    count++;
                }
            }
            else if (s[i]=='B'&&s[i+1]=='G'||s[i]=='G'&&s[i+1]=='B')
            {
                s[i]='R';
                s[i+1]=s[i+2];
                count++;
                if(s[i]==s[i+1])
                {
                    count++;
                }
            }
            else if (s[i]=='G'&&s[i+1]=='R'||s[i]=='R'&&s[i+1]=='G')
            {
                s[i]='B';
                s[i+1]=s[i+2];
                count++;
                if(s[i]==s[i+1])
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
