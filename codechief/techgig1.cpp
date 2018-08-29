#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,i,l,m,u=m;
    cin>>n;
    m=n+n;
    int arr1[n],arr2[n];
    int arr[m];
    if(n>3&&n<1000000)
    {
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
            cout<<arr1[i];
        }
        cin>>l;
        if(l==n)
        {
        for(int j=0;j<n;j++)
        {
            cin>>arr2[j];
            cout<<arr2[j]<<endl;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr1[i];
        arr[i+n]=arr2[i];
    }
     for(i=0;i<m;i++)
    {
        cout<<arr[i]<<endl;
    }

    for(i=0;i<m-1;i++)
    {
        for(j=1;j<m;j++)
        {
            if(arr[i]==arr[j])
                arr[i]='$';
        }
    }

}
