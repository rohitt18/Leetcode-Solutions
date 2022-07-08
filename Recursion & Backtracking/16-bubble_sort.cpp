#include <iostream>
using namespace std;

void sortArray(int *arr, int n){
    
    // base case 
    if( n == 0 || n == 1 ) return ;

    // 1 case solve kar liya - largest element ko end mai rakh dega
    for(int i=0;i<n-1;i++){
        // agar yeh i+1 hai toh n-i tak hi jana varna last element se bahar chale jaoge
        if(arr[i] > arr[i+1]){ 
            swap(arr[i],arr[i+1]);
        }
    }

    // Recursive call
    sortArray(arr,n-1);

}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}