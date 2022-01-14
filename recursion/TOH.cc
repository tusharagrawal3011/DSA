#include<iostream>
using namespace std;
void TOH(int n,char a,char b,char c)
{
    if(n==0)
    return;
    TOH(n-1,a,c,b);
    cout<<"shift from rod "<<a<<" to "<<c<<endl;
    TOH(n-1,b,a,c);
}
int main()
{
    int n;
    cin>>n;
    char a='A',b='B',c='C';
    TOH(n,a,b,c);
    return 0;
}