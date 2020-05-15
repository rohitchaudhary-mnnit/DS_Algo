#include <iostream>
using namespace std;

int highestnumber(int arr[],int l,int r,int n)
{
    if(l<=r)
    {
     int mid=l+(r-l)/2;
     if(arr[mid-1]<arr[mid])
        return highestnumber(arr,mid+1,r,n);
        else
            return highestnumber(arr,l,mid-1,n);
    }
    else
        return arr[r];
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,*arr;
        cin>>n;
        arr=new int[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<highestnumber(arr,0,n-1,n);
        cout<<endl;
    }
	//code
	return 0;
}
