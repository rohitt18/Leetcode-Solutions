#include <iostream>
#include <vector>
using namespace std;


int kadane(int arr[], int n){
    int currSum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxi = max(maxi, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxi;
}

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int wrapsum;       // x
    int nonwrapsum;    //y

    nonwrapsum = kadane(a,n);

    // calculating the sum of orginal array(totalSum)
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum = totalSum + a[i];
        a[i] = -a[i];
    }

    // applying kadane's algo on reversed sign wala array (a2)
    // that will give the sum of non contributing elements

    // max subarray sum = total sum - sum of non-contributing elements
    wrapsum = totalSum + kadane(a, n);

    int ans = max(wrapsum, nonwrapsum);

    cout<<"Max subarray sum is "<< ans <<endl;

    return 0;
}