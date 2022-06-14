#include<iostream>
using namespace std;

// int power(int x,int n){
//     int ans = 1;
//     for(int i=1;i<=n;i++){
//         ans = ans * x;
//     }
//     return ans;
// }

int fastExponentiation(int x,int n){
    int result = 1;

    while(n>0){
        
        if(n&1){
            result = result * x;
        }
        n = n >> 1;
        x = x * x;
    }
    return result;
}

int main(){
    int a,b;
    cin>>a>>b;
    
    // int ans = power(a,b);
    int ans = fastExponentiation(a, b);
    cout<<ans;

    return 0;
}





// sum of n natural no.

// int main() {
//     int n;
//     cin>>n;
//     int sum = 0;

//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//     cout<<sum;
// }