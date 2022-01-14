#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0.0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1/pow(i,2));
    }
     cout<<sum;
    return 0;
}