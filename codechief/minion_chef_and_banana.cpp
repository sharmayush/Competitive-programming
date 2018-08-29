#include"bits/stdc++.h"
#define Casese int t;cin>>t;while(t--)

using namespace std;
int main()
{
    Casese
    {
        long long int n,i,h;
        cin>>n>>h;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long beg=1,end=a[n-1],mid,m,count,r;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            m=mid;
            count=0;
            for(i=0;i<n;i++)
            {
                r=0;
                if(a[i]<=m)
                r=1;
                else
                {
                    r=a[i]/m;
                    if(a[i]%m!=0)
                    r+=1;
                }
                count=count+r;
                r=0;
            }
            if(h>=count)
                end=mid-1;
            else
                beg=mid+1;
        }
        cout<<beg<<"\n";
    }
    return 0;
}
