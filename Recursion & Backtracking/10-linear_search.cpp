// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    // base case
    if(n==0) return false;

    if(arr[0]==key) return true;
    else{
        // RR
        return linearSearch(arr+1, n-1, key);
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

        int key;
        cin>>key;

        bool ans = linearSearch(arr, n, key);

        if (ans)
            cout << "Found" << endl;
        else
            cout << "Not Found" << endl;
    }
}