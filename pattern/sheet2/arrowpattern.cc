#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n*2;i++)
    {
        if(i<=n)
        {
        for(int j=1;j<i;j++)
        cout<<" ";      
        for(int j=1;j<=i;j++)
        cout<<"*";
        }
        else if(i>n)
        {
            for(int j=n*2;j>i+1;j--)
            cout<<" ";
            for(int j=i;j<n*2;j++)
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;

}