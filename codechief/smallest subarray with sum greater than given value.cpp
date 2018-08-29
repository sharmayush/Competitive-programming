#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        cin>>x;
        int sum=0,cnt=0,flag=n;
        int arr[n];
        int arr1[cnt];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int q=0;q<n-1;q++)
        {
            for(int j=q;j<n;j++)
            {
                sum = sum+arr[j];
                if(sum<x)
                {
                    cnt++;
                }
            }
            if(flag>cnt)
            {
                flag = cnt;
            }
        }
        if(flag!=cnt)
        {
            cout<<flag<<endl;
        }
    }
}
