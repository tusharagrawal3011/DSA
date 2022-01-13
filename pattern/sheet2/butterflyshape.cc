#include<iostream>
using namespace std;
int main()
{
    int n;
   cin>>n;
   int c=2;
    for(int i=1;i<=n;i++)
    {
        if(i<=(n+1)/2)
        {
            for(int j=1;j<=i;j++)
                cout<<j;
            for(int j=i;j<(n+1)/2;j++)
                  cout<<" ";
            for(int j=(n+3)/2;j<=n;j++)
            {
                if((i+j)>=n+1)
                cout<<j;
                else
                cout<<" ";
            }      
        }
        else
        {
            for(int j=1;j<=i-c;j++)
            cout<<j;
            for(int j=i;j>(n+1)/2;j--)
            cout<<" ";
            for(int j=(n+3)/2;j<=n;j++)
            {
                if(i>j)
                cout<<" ";
                else
                cout<<j;
            }
            c+=2;
        }
    cout<<"\n";
    }

return 0;
}
