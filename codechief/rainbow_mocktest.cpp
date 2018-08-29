#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int countA=1,n,check=1;
        cin>>n;
        ll int arr[n];
        ll int half = n/2;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<half;i++)
        {
            if(arr[i]<arr[i+1] && arr[i]<8 && arr[i+1]<8)
                check++;
        }
        //  cout<<"check "<<check<<endl;
        if(check==7)
        {
            for(int j=half-1,k=half+1;(j>=0) && (k<=n);j--,k++)
            {
                if(arr[j]==arr[k] && arr[j]<8 && arr[k]<8)
                {
                    cout<<"value of left "<<arr[j]<<"value of right "<<arr[k];
                    countA++;
                }

            }
        }
        if(countA==half)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
