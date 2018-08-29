#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]<k)
            {
                arr[j]= arr[j]+k;
            }
            else if(arr[j]>k)
            {
                arr[j]= arr[j]-k;
            }
        }
        sort(arr,arr+n);
    /*  for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<endl;
        }
    */
        flag= arr[n-1]-arr[0];
        cout<<flag<<endl;
    }
}
