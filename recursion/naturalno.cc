#include<iostream>
using namespace std;
void order(int n)
{
   if(n==0)
   return;
   order(n-1);
   cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    order(n);
    return 0;
}