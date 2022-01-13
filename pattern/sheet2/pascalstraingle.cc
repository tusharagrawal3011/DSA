#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<1<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<1<<" ";
        for(int j=1;j<=i;j++)
        {
              int r=fact(i)/(fact(i-j)*fact(j));
              cout<<r<<" ";
        }
        cout<<"\n";
    }
    return 0;
}