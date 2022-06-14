#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = 2;
    int pcd = a[1]-a[0];
    int j = 2; // bec 1 tak ki kahani dekh li upar

    int currLength = 2;

    while(j<n){

        if(pcd == a[j]-a[j-1]){
            currLength++;
        }
        else if(pcd != a[j]-a[j-1]){
            pcd = a[j] - a[j-1];
            currLength = 2;
        }
        ans = max(ans,currLength);
        j++;
    }

    cout<<ans<<endl;

    return 0;
}