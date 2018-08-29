#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    int arr[n][n];
    int pos_x,pos_y;
    char enter;
    int mat = n*n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<((mat)*(mat-1));i++)
    {
        cin>>k;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(k>=0 && k<=8)
                {
                    if(arr[i][j]==k)
                    {
                        pos_x = i;
                        pos_y = j;
                        // k+=1;
                    }
                }
            }
        }
        cin>>enter;
        if(enter=='w')
        {
            //cout<<"up"<<endl;
            int newpos_x;
            int newpos_y;
            int temp;
            if(pos_x!=0)
            {
                newpos_x = pos_x-1;
                newpos_y = pos_y;
                swap(arr[pos_x][pos_y],arr[newpos_x][newpos_y]);
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        else if(enter=='a')
        {
            //cout<<"left"<<endl;
            int newpos_x;
            int newpos_y;
            int temp;
            if(pos_y!=0)
            {
                newpos_x = pos_x;
                newpos_y = pos_y-1;
                swap(arr[pos_x][pos_y],arr[newpos_x][newpos_y]);
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        else if(enter=='s')
        {
            //cout<<"down"<<endl;
            int newpos_x;
            int newpos_y;
            int temp;
            if(pos_x!=2)
            {
                newpos_x = pos_x+1;
                newpos_y = pos_y;
                swap(arr[pos_x][pos_y],arr[newpos_x][newpos_y]);
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        else if(enter=='d')
        {
            //cout<<"right"<<endl;
            int newpos_x;
            int newpos_y;
            int temp;
            if(pos_y!=2)
            {
                newpos_x = pos_x;
                newpos_y = pos_y+1;
                swap(arr[pos_x][pos_y],arr[newpos_x][newpos_y]);
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
