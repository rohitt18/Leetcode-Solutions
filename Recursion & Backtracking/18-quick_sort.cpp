#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    // take a pivot
    int pivot = arr[s];

    // count all elements lesser than pivot
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }

    // place the pivot on right index
    int pivotIndex = s + count; 
    swap(arr[s], arr[pivotIndex]);

    // left and right wala part sambhal lete hai
    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // RR
    // left
    quickSort(arr, s, p - 1);

    // right
    quickSort(arr, p + 1, e);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // taking inputs for the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    // print the final array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}