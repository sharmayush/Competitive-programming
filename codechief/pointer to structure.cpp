#include<bits/stdc++.h>
using namespace std;

struct student
{
    char name[10];
    int rollno;
};

int main()
{
    struct student b;
    struct student *ptr=&b;
    cin>>ptr->name;
    cin>>ptr->rollno;
    cout<<ptr->name;
    cout<<ptr->rollno;
}
