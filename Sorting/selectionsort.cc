#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp;
    int mIndex;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        mIndex=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[mIndex])
                mIndex=j;


        temp=arr[i];
        arr[i]=arr[mIndex];
        arr[mIndex]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}