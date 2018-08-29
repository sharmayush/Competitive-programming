#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        ll int sum=0;
        cin>>n;
        vector<ll int>myvector;
        ll int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int tk = arr[i]+arr[j];
                myvector.push_back(tk);
            }
        }
        for(int i=0;i<myvector.size()-1;i++)
        {
            ll int temp;
            for(int j=i+1;j<myvector.size();j++)
            {
                if(myvector[i]==myvector[j])
                {
                    temp = i;
                    myvector.erase(myvector.begin()+j);
                }
            }
            myvector.erase(myvector.begin()+temp+1);
        }

        for(int i=0;i<myvector.size();i++)
        {
            sum +=myvector[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
