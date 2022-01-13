#include<iostream>
using namespace std;
void odd(int n)
{
    if(n==0)
    return;
     odd(n-1);
     if(n%2==1)
     cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    odd(n*2);
    return 0;
}