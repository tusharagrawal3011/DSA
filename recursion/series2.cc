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
     cout<<"+ "<<pow(2,n-1)<<" ";      
}
int main()
{
    int n;
    cin>>n;
    series(n);
    return 0;
}