#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    string top;
	    string bottom;
	    cin>>top>>bottom;
	    long long int b=0,o=0,temp=0;
	    for(int i=0;i<3;i++)
        {
            if(top[i]=='b' && bottom[i]!='o' && bottom[i]!='b')
            {
                b++;
                temp++;
            }
            else if(top[i]=='o' && bottom[i]!='o' && bottom[i]!='b')
            {
                o++;
                temp++;
            }
            else if(top[i]!='b' && top[i]!='o' && bottom[i]=='b')
            {
                b++;
                temp++;
            }
            else if(top[i]!='b' && top[i]!='o' && bottom[i]=='o')
            {
                o++;
                temp++;
            }
            else if(top[i]=='b' && bottom[i]=='o')
            {
                b++;
                o++;
                temp++;
            }
            else if(top[i]=='o' && bottom[i]=='b')
            {
                o++;
                b++;
                temp++;
            }
            else if(top[i]=='b' && bottom[i]=='b')
            {
                b++;
                temp++;
            }
            else if(top[i]=='o' && bottom[i]=='o')
            {
                o++;
                temp++;
            }
        }
        if(b>=2 && o>=1 && temp==3)
        {
            cout<<"yes"<<endl;
        }
        else 
        {
            cout<<"no"<<endl;
        }
	}
	return 0;
}
