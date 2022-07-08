#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){

    // base case
    if(n==0 || n==1) return true;

    // processing 
    if(arr[0]>arr[1]) return false;

    else{
        // RR
        return isSorted(arr+1,n-1);
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        bool ans = isSorted(arr,n);

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}