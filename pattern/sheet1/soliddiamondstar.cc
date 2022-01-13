#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<=n;i++)
    {
        if(i<=5)
        {
        for(int j=0;j<=(n/2-i-1);j++)
        {
          cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
            cout<<" ";
        }
        }
        else
        {
              for(int j=1;j<=i-5;j++)
              cout<<" ";
              for(int j=i-c;j>0;j--)
              {
                  cout<<"*";
                  cout<<" ";
              }
              c+=2;
        }  
        
        cout<<"\n";
    }
    return 0;
}