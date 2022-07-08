#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{
    // base case
    if(n==0) return 0;

    if(n==1) return arr[0];

    else{
        // RR
        int sum = arr[0] + getSum(arr+1,n-1);
        return sum;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = getSum(arr, n);

        cout <<"Sum is " << ans << endl;
    }
}