#include<bits/stdc++.h>
using namespace std;

int main()
{
   long int n;
    cin>>n;
 if(n<=20 && n>=1)
  {

    while(n--)
    {
       long long int m=0,j=0,ta=0,tb=0,o,flag=0,z=0,v;
        string s;
        cin>>s;
        v=s.length();
        if(v<=100000 && v>=1)
       {

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A'||s[i]=='B')
            {
                j++;
            }
        }
        int arr[j];
        for(int k=0;k<s.length();k++)
        {
            if(s[k]=='A'||s[k]=='B')
            {
                arr[flag]=k;
                flag++;

            }
        }
        int p,q;
        for(int l=0;l<j-1;l++)
        {
            p = arr[l];
            q = arr[l+1];

            if(s[p]=='A'&&s[q]=='A')
            {
                ta = ta+q-p+1;
                if(z!=0)
                {
                    if(s[o]=='A')
                    {
                    	ta = ta-1;
					}
                }
            }
            else if(s[p]=='B'&&s[q]=='B')
            {
                tb = tb+q-p+1;
               if(z!=0)
                {
                    if(s[o]=='B')
                    {
                    	tb = tb-1;
					}
                }
            }
            else if(s[p]=='A'&&s[q]=='B')
            {
                ta = ta+1;
                if(z!=0)
                {
                    if(s[o]=='A')
                    {
                    	ta = ta-1;
					}
                }
            }
            else if(s[p]=='B'&&s[q]=='A')
            {
                tb = tb+1;
                if(z!=0)
                {
                    if(s[o]=='B')
                    {
                    	tb = tb-1;
					}
                }
            }
            o = p;
            z++;
        }
        if(s[q]=='A')
        {
            ta++;
            if(s[p]=='A')
            {
                ta--;
            }
        }
        else if(s[q]=='B')
        {
            tb++;
            if(s[p]=='B')
            {
                tb--;
            }
        }
        cout<<ta<<" "<<tb;
       }
    }

  }
  return 0;
}
