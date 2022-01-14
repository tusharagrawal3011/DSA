#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        sum=sum+((pow(x,i*2)))/fact(i*2);
        else
        sum=sum-((pow(x,i*2)))/fact(i*2);
    }
     cout<<sum;
    return 0;
}