#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for( j=1;j<=5;j++)
        {
            if(j==i||(i+j)==6)
            cout<<i;
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}