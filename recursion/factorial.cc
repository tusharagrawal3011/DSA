#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int f=fact(n);
    cout<<f;
       return 0;

}