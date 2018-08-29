#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string top;
        string bottom;
        cin>>top>>bottom;
        if(top[0]!='b' && top[1]!='o' && top[2]!='b' && top[0]!='o' && top[1]!='b' && top[2]!='o')
        {
            int b=0,o=0;
            if(bottom[0]=='b' || bottom[0]=='o' || bottom[0]=='b')
            {
                if(bottom[0]=='b')
                {
                    b++;
                }
                else if(bottom[0]=='o')
                {
                    o++;
                }
                else if(bottom[0]=='b')
                {
                    b++;  
                }
            }
            if(bottom[1]=='b' || bottom[1]=='o' || bottom[1]=='b')
            {
                if(bottom[1]=='b')
                {
                    b++;
                }
                else if(bottom[1]=='o')
                {
                    o++;
                }
                else if(bottom[1]=='b')
                {
                    b++;  
                }
            }
            if(bottom[2]=='b' || bottom[2]=='o' || bottom[2]=='b')
            {
                if(bottom[2]=='b')
                {
                    b++;
                }
                else if(bottom[2]=='o')
                {
                    o++;
                }
                else if(bottom[2]=='b')
                {
                    b++;  
                }
            }
            // cout<<"b "<<b<<" "<<"o "<<o<<endl;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if(top[0]!='b' && top[1]!='o' && (top[2]=='b'||top[2]=='o'))
        {
            int b=0,o=0;
            if(top[2]=='b')
            {
                b++;
            }
            else if(top[2]=='o')
            {
                o++;
            }
            if(bottom[0]=='b' || bottom[0]=='o')
            {
                if(bottom[0]=='b')
                {
                    b++;
                }
                else if(bottom[0]=='o')
                {
                    o++;
                }
            }
            if(bottom[1]=='b' || bottom[1]=='o')
            {
                if(bottom[1]=='b')
                {
                    b++;
                }
                else if(bottom[1]=='o')
                {
                    o++;
                }
            }
            cout<<"b "<<b<<" "<<"o "<<o<<endl;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if(top[0]!='b' && (top[1]=='o'||top[1]=='b') && top[2]!='b')
        {
            int b=0,o=0;
            if(top[1]=='b')
            {
                b++;
            }
            else if(top[1]=='o')
            {
                o++;
            }
            if(bottom[0]=='b')
            {
                b++;   
            }
            if(bottom[2]=='b')
            {
                b++;
            }
            cout<<"b "<<b<<" "<<"o "<<o<<endl;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if(top[0]!='b' && (top[1]=='b'||top[1]=='o')&&(top[2]=='b'||top[2]=='o'))
        {
            int b=0,o=0;
            if(top[1]=='b')
            {
                b++;
            }
            else if(top[1]=='o')
            {
                o++;
            }
            if(top[2]=='b')
            {
                b++;
            }
            else if(top[2]=='o')
            {
                o++;
            }
            if(bottom[0]=='b')
            {
                b++;
            }
            cout<<"b "<<b<<" "<<"o "<<o<<endl;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if((top[0]=='b'||top[0]=='o') && top[1]!='o' && top[2]!='b')
        {
            int b=0,o=0;
            if(top[0]=='b')
            {
                b++;
            }
            else if(top[0]=='o')
            {
                o++;
            }
            if(bottom[1]=='o' || bottom[1]=='b')
            {
                if(bottom[1]=='o')
                {
                    o++;
                }
                else if(bottom[1]=='b')
                {
                    b++;
                }
            }
            if(bottom[2]=='o' || bottom[2]=='b')
            {
                if(bottom[2]=='o')
                {
                    o++;
                }
                else if(bottom[2]=='b')
                {
                    b++;  
                }
            }
            cout<<"b "<<b<<" "<<"o "<<o<<endl;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if((top[0]=='b'||top[0]=='o') && top[1]!='o' && (top[2]=='b'||top[2]=='o'))
        {
            int b=0,o=0;
            if(top[0]=='o')
            {
                o++;
            }
            else if(top[0]=='b')
            {
                b++;  
            }
            if(top[2]=='o')
            {
                o++;
            }
            else if(top[2]=='b')
            {
                b++;  
            }
            if(bottom[1]=='o')
            {
                o++;   
            }
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if((top[0]=='b'||top[0]=='o') && (top[1]=='o'||top[1]=='b') && top[2]!='b')
        {
            int b=0,o=0;
            if(top[0]=='b')
            {
                b++;
            }
            else if(top[0]=='o')
            {
                o++;  
            }
            if(top[1]=='o')
            {
                o++;
            }
            else if(top[1]=='b')
            {
                b++;  
            }
            if(bottom[2]=='b')
            {
                b++;
            }
            cout<<"b "<<b<<" "<<"o "<<o<<endl;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
        else if(top[0]=='b' && top[1]=='o' && top[2]=='b')
        {
            int b=0,o=0;
            b+=2;
            o+=1;
            if(b>=2 && o>=1)
            {
                cout<<"yes"<<endl;
            }
            if(b<2 || o<1)
            {
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}