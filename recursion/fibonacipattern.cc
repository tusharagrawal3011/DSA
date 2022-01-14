#include<iostream>
using namespace std;
void fibo(int n){
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        fibo(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    if(n>2){
        cout<<0<<" "<<1<<" ";
        fibo(n-2);
    }
    else if(n==1)
        cout<<0;
    else if(n==2)
        cout<<0<<" "<<1;
    return 0;
}