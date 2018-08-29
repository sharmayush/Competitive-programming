#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,u,d;
        ll int count=1;
        int parachute=1;
        cin>>n>>u>>d;
        ll int hills[n];
        for(ll int i=0;i<n;i++)
        {
            cin>>hills[i];
        }
        for(ll int i=0;i<n-1;i++)
        {
            if(hills[i]<hills[i+1])
            {
                ll int diff=hills[i+1]-hills[i];
                if(diff<=u)
                {
                    count++;
                }
                else 
                {
                    break;
                }
            }
            else if(hills[i]>hills[i+1])
            {
                ll int flag= hills[i]-hills[i+1];
                if(flag>d && parachute==1)
                {
                    count++;
                    parachute=0;
                }
                else if(flag<=d)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            else if(hills[i]==hills[i+1])
            {
                count++;
            }
        }    
        cout<<count<<endl;
    }
    return 0;
} 