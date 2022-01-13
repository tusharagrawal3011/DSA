
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int c=2;
     for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(i<=5)
            {
               if((j-i)==4||(i+j)==6)
               cout<<i;
               else
               cout<<" ";
            }
            else
            {
                if((i-j)==4||(i+j)==14)
                {
                    cout<<(i-c);
                }
                else
                cout<<" ";
            }
        }
            
            cout<<"\n";
            if(i>5)
            c=c+2;
    }
        
        return 0;
    }