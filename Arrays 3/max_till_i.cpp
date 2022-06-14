#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int maxi = INT_MIN;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        maxi = max(maxi,a[i]);
        cout<<maxi<<endl;
    }

    return 0;
}