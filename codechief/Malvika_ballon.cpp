#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i,b=0,a=0;
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
                b++;
            }
            else if(s[i]=='a')
            {
                a++;
            }
        }
        if(b>=a)
        {
           cout<<a<<endl;
        }
        else if(a>b)
        {
            cout<<b<<endl;
        }
    }
}
