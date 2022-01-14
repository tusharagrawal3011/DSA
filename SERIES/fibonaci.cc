#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c;
    int sum=0;
    if(n==1)
    cout<<0;
    else if(n==2)
    cout<<1;
    else
    {
       for(int i=1;i<=n-2;i++)
       {
           c=a+b;
           a=b;
           b=c;
           sum+=c;
       }
       cout<<1+sum;
    }

    return 0;
}