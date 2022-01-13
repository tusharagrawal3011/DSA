#include<iostream>
using namespace std;
int main()
{
     int i,j;
     char c='E';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j==i||(i+j)==10)
            cout<<c;
            else
            cout<<" ";
        }
        cout<<"\n";
        c--;
    }
    return 0;

}
