#include<bits/stdc++.h>
using namespace std;
void series(int n)
{
     if(n==1)
     {
     cout<<1;
     return;
     }
     series(n-1);
     int r=pow(3,n-1);
     cout<<"+ "<<r<<" ";      
}
int main()
{
    int n;
    cin>>n;
    series(n);
    return 0;
}