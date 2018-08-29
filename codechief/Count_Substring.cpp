#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin>>art;

        int arr[n];
        int countA=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                countA++;
            }
        }
        int sum = countA*(countA+1)/2;
        cout<<sum<<endl;
    }
}
