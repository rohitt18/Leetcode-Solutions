#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

bool binarySearch(int *arr,int s,int e,int k){

    cout<<endl;
    print(arr,s,e);

    // base case
    
    // element not found
    if(s>e) return false;

    int mid = s + (e-s)/2;

    // element found
    if(arr[mid]==k) return true;


    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int s = 0;
        int e = n-1;

        bool ans = binarySearch(arr,s,e,k);

        cout<<endl; 

        if (ans)
            cout << "Found" << endl;
        else
            cout << "Not Found" << endl;

    }
}