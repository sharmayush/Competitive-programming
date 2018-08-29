#include<iostream>

using namespace std;

int area(int s1,int s2 )
{
    int area;
    cin>>s1>>s2;
    area= s1*s2;
    return area;
}

int volume(int h)
{
    int total,v,s1,s2;
    total=area(s1,s2);
    v=total*h;
    return v;
}

int  main()
{
    int x;
    x= volume(5);
    cout<<x<<endl;
}
