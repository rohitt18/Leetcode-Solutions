#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    const int N = INT_MAX;

    int idx[n];

    for(int i=0;i<n;i++){
        idx[i] = -1;
    }

    int minindex = INT_MAX;
 
    for(int i=0;i<n;i++){
        if( idx[a[i]] != -1 ){
            minindex = min(minindex, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }

    if (minindex == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout << minindex + 1 << endl;
    }

    return 0;
}

