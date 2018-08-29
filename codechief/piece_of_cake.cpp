#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        int a[26]={0};
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            int x=s[i];
            a[x-97]++;
        }
        sort(a,a+26);
        for(i=0;i<25;i++)
        {
            sum+=a[i];
        }
        if(a[25]==sum)
        {
            cout<<"YES"<<endl;
        }
        else if(a[25]!=sum)
        {
            cout<<"NO"<<endl;
        }
    }
}
