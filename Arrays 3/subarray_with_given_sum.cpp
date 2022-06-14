#include <iostream>
using namespace std;

int main(){

    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0, j=0, st=-1, en=-1, currSum = 0;

    while(j<n && currSum+a[j]<s){
        currSum=currSum+a[j];
        j++;
    }

    if(currSum==s){
        cout<<i+1<<" "<<j<<endl;
    }

    while(j<n){

        currSum = currSum + a[j];

        while(currSum>s){
            currSum = currSum - a[i];
            i++;
        }

        if(currSum==s){
            st = i+1;
            en = j+1;
            break;
        }

        j++;
    }

    cout<<st<<" "<<en<<endl;

    return 0;
}







































// int main()
// {
//     int n,sum;
//     cin >>n>>sum;
    
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }


//     int left = 0;
//     int right = 0;

//     int currSum = 0;

//     while(right<n && currSum<=sum){
//         currSum = currSum + a[right];
//         right++;
//     }

//     while(left<n && currSum>sum){
//         currSum = currSum - a[left]; 
//         left++;  
//     }

//     if(currSum == sum){
//         cout<<left<<" "<<right<<endl;
//     }

//     return 0;

// }