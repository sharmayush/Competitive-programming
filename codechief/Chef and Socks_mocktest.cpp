#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int jacket,sock,rupees;
    cin>>jacket>>sock>>rupees;
    rupees= rupees-jacket;
    int art = rupees/sock;
    if(art%2==0)
    {
        cout<<"Lucky Chef"<<endl;
    }
    else
        cout<<"Unlucky Chef"<<endl;
}
