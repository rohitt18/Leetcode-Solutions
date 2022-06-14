#include <iostream>
// #include <climits>
using namespace std;

// Approach 1 : O(n^2) & O(1)

// int main()
// {
//     int n;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int maxSum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         int sum =0;

//         for (int j = i; j < n; j++)
//         {
//             sum+=a[j];
//         }
//             maxSum = max(maxSum,sum);
//     }   

//     cout<<maxSum<<endl;

//     return 0;
// }



// Approach 2 : Kadane's Algorithm : O(n) & O(1)

int main(){
    
    
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int currSum=0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxi = max(maxi, currSum);
    }

    cout<<maxi<<endl;

    return 0;
}