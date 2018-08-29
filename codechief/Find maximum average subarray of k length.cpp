#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum,fnl,k;
        cin>>n;
        cin>>k;
        int arr[n];
        int flag = (n-k)+1;
        int arr1[flag];
        int grt = arr1[flag-1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int j=k-1;j<=n;j++)
        {
            for(int i=0;i<k;i++)
            {
                sum = sum+arr[i];
            }
            for(int q=0;q<flag;q++)
            {
                arr1[q] = sum;
            }
        }
        sort(arr1,arr1+flag);
        fnl= grt/k;
        cout<<fnl<<endl;
    }
}
