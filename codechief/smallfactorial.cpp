#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,store,maxi=0,newvalue;
    cin>>t;
    store = t;
    long long int arr[t];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for(i=0;i<t;i++)
    {
        newvalue=arr[i]*store;
        if(newvalue>maxi)
        {
            maxi = newvalue;
        }
        store--;
    }
    cout<<maxi<<endl;
}
