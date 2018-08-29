#include<iostream>
#include<cctype>
int main()
{
    int i;
    char str[]="ayu4sh";
    i=0;
    while(isalnum(str[i]))
        i++;
    cout<<i;
    return 0;
}
