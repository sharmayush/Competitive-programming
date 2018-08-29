#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        char s1[]={'a','b','c','d','e','f','g','h','i','j','k','l','m'};
        char s2[]={'z','y','x','w','v','u','t','s','r','q','p','o','n'};
        int a = s.length();
        //cout<<a<<endl;
        if(n%2==0 && a==n)
        {
            for(int i=0;i<=a-2;i++)
            {
                if(i%2==0)
                {
                    for(int j=i+1;j<=a-1;j++)
                    {
                        //cout<<"hello"<<endl;
                        if(i+1==j && j%2!=0)
                        {
                            swap(s[i],s[j]);
                        }
                    }
                }

            }
        }
        else if(n%2!=0 && a==n)
        {
            for(int i=0;i<=a-3;i++)
            {
                if(i%2==0)
                {
                    for(int j=i+1;j<=a-2;j++)
                    {
                        //cout<<"hello"<<endl;
                        if(i+1==j && j%2!=0)
                        {
                            swap(s[i],s[j]);
                        }
                    }
                }
            }
            //cout<<s<<endl;
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<13;j++)
            {
                if(s[i]==s1[j])
                {
                    swap(s[i],s2[j]);
                }
                for(int k=0;k<13;k++)
                {
                    if(s[i]==s2[j])
                    {
                        swap(s[i],s1[j]);
                    }
                }
            }
        }
        cout<<s<<endl;
    }
	return 0;
}
