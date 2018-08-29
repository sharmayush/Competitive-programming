#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y,z;
        cin>>n;
        k = n*(n+1)/2;
        int arr[k];
        int sum[n-1];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            x = i;
            y = x+(i+1);
            z = y+1;
            sum[i] = arr[x]+arr[y]+arr[z];
        //    cout<<"sum "<<sum[i]<<endl;
            //cout<<"hello"<<endl;
          //  cout<<"x y z"<<x<<y<<z<<endl;
        }
        sort(sum,sum+n-1);
        cout<<sum[n-2]<<endl;
    }
    return 0;
}
