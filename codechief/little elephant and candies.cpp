#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            long int candy;
            cin>>candy;
            sum = sum+candy;
        }
        if(sum<=k)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
