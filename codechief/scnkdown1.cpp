#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,b;
        cin>>n>>b;
        ll int r=b*2;
        ll int team[r];
        ll int sd[n];
        ll int count=0;
        ll flag=0,final;
    /*    for(ll int i=0;i<r;i++)
        {
            cin>>team[i];
        }
      */

        if(n%2==0&&n>r)
    {
      //  ll int flag=0,final;
        for(ll int i=0;i<r;i++)
        {
            cin>>team[i];
        }
        for(ll int j=0;j<n;j++)
        {
            sd[j]=j+1;
        }
        for(ll int j=0;j<n;j++)
        {
            ll int i=0;
        if(team[i]==sd[j])
            {
                team[i]++;
                flag++;
            }
        }
        final=n-flag;
        if(final==0)
        {
            cout<<"yes"<<endl;
        }
/*        else if(final!=0)
            cout<<"no"<<endl;
    */
    }
    else if(n%2!=0&&n<r)
    {
        for(ll int i=0;i<r;i++)
        {
            cin>>team[i];
        }
        cout<<"no"<<endl;
    }
/*    else if(n<r)
        cout<<"no"<<endl;
    */
    }
    return 0;
}
