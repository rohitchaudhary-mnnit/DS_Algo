#include<bits/stdc++.h>
using namespace std;

int firstoccurence(int arr[],int l,int r,int x,int n)
{
    if(l<=r)
    {
        int mid=l+(r-l)/2;
        if((mid==0 || arr[mid-1]<x) && arr[mid]==x)
          return mid;
        else if(arr[mid]<x)
                return firstoccurence(arr,mid+1,r,x,n);
        else 
            return firstoccurence(arr,l,mid-1,x,n);
    }
    return -1;
}

int lastoccurence(int arr[],int l,int r,int x,int n)
{
    if(l<=r)
    {
        int mid=l+(r-l)/2;
        if((mid==n-1 || arr[mid+1]>x) && arr[mid]==x)
          return mid;
        else if(arr[mid]>x)
                return lastoccurence(arr,l,mid-1,x,n);
        else
            return lastoccurence(arr,mid+1,r,x,n);
    }
    return -1;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int f=firstoccurence(arr,0,n-1,x,n);
        int l=lastoccurence(arr,0,n-1,x,n);
        if(f==-1 && l==-1)
            cout<<"-1";
        else
            cout<<f<<" "<<l;
        cout<<endl;
    }
	//code
	return 0;
}
