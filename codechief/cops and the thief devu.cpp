#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,y;
        cin>>m>>x>>y;
        int cops = x*y;
        int arr[m];

        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        int subarr1[m];
        int subarr2[m];
        int flag=0;
        for(int j=0;j<m;j++)
        {
            if(((arr[j]-cops)<=0)||((arr[j]-cops)>100))
            {
                subarr1[j]=1;
            }
            else if(((arr[j]-cops)>=1)||((arr[j]-cops)<=100))
            {
                subarr1[j]=arr[j]-cops;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(((arr[j]+cops)<=0)||((arr[j]-cops)>100))
            {
                subarr2[j]=1;
            }
            else if(((arr[j]+cops)>=1)||((arr[j]-cops)<=100))
            {
                subarr2[j]=arr[j]+cops;
            }
        }

    /*    for(int j=0;j<m;j++)
        {
            cout<<subarr1[j]<<endl;
            cout<<subarr2[j]<<endl;
        }
    */
        for(int l=0;l<m-1;l++)
        {
            if(subarr2[l]<=subarr1[l+1])
            {
                flag =subarr1[l+1]-subarr2[l];
            }
            else if(subarr2[l]>subarr1[l+1])
            {
                flag =subarr2[l]-subarr1[l+1];
            }
        }
        flag= flag+100-(subarr2[m-1])-1;
        cout<<flag<<endl;
    }
}
