#include<iostream>
using namespace std;
void even(int n)
{
    if(n==0)
    return;
     even(n-2);
     cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    even(n*2);
    return 0;
}