#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t,a,b;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str="";
        string ones[]= {"","one","two","three","four","five",
                        "six","seven","eight","nine","ten",
                        "eleven","twelve","thirteen","fourteen",
                        "fiveteen","sixteen","seventeen","eighteen",
                        "nineteen"};
        string tens[]= {"",",","twenty","thirty","fourty","fivety",
                        "sixty","seventy","eighty","ninety"};

        string hundreds[]= {"","one hundred","two hundred","three hundred",
                            "four hundred","five hundred","six hundred","seven hundred",
                            "eight hundred","nine hundred"};

        string thousands[]= {"","one Thousand","two Thousand","three Thousand",
                            "four Thousand","five Thousand","six Thousand","seven Thousand",
                            "eight Thousand","nine Thousand"};

        if(n>19&&n<100)
        {
            str=str+tens[n/10]+" "+ones[n%10];
        }
        else if(n>=100&&n<1000)
        {
            a= n%100;
            str= str+hundreds[n/100]+" "+tens[a/10]+" "+ones[a%10];
        }

        else
        str=str+ones[n];

        cout<<str<<endl;
    }
}
