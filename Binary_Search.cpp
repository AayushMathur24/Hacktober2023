#include <iostream>
using namespace std;

int bsearch(int arr[],int low,int high,int x)
{
    if(low<=high)
    {
    int mid = (low+high)/2;
    if(arr[mid]==x)
    {
        cout<<"Element found at index : "<<mid;
        exit(1);
    }
    else if(arr[mid]<x)
        bsearch(arr,mid+1,high,x);
    else
        bsearch(arr,low,mid-1,x);
    }
    return -1;
}

int main()
{
    int n,num;
    cout<<"Enter number of terms : ";
    cin>>n;
    int arr[n];
    cout<<"Enter values in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter number to be found : ";
    cin>>num;

    int ans = bsearch(arr,0,n-1,num);
    if(ans==-1)
        cout<<"Element not found";
    return 0;
}
