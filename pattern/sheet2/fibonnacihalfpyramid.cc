#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    int c=a+b;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c;
            cout<<" ";
            a=b;
            b=c;
            if(i!=1)
            c=a+b;
        }
        cout<<"\n";
    }
    return 0;
}