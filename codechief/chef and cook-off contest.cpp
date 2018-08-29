#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string str[]=  {"cakewalk","simple","easy","easy-medium","medium","medium-hard","hard"};
    cin>>t;
    while(t--)
    {
        cin>>n;
        string abhi="";
        int count = 0;
        if(n>=5)
        {
            string k;
            for(int i=0;i<n;i++)
            {
                cin>>k;
                abhi.append(k);
            }
            for(int j=0;j<n;j++)
            {
                if(str[0]==abhi[j])
                {
                    count++;
                }
            }
            cout<<count;
        }
    }
}
