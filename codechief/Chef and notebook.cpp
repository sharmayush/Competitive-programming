#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,x,y,k,n,p,c;
    cin>>t;
    while(t--)
    {
        long long int flag=0;
        cin>>x>>y>>k>>n;
        long long needed=(x-y);
            for(long long int i=0;i<n;i++)
            {
                cin>>p>>c;
                {
                    if(needed<=p&&(k>=c))
                    {
                       flag=1;
                    }
                }
            }
        if(flag==1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
}
