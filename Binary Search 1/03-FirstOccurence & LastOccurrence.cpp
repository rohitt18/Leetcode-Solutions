#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key) // left mai jao
        {
            e = mid - 1;
        }
        else if (arr[mid] < key) // right mai jao
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key) // left mai jao
        {
            e = mid - 1;
        }
        else if (arr[mid] < key) // right mai jao
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "First Occurrence of 3 is at Index " << firstOccurrence(even, 10, 3) << endl;
    cout << "Last Occurrence of 3 is at Index " << lastOccurrence(even, 10, 3) << endl;

    return 0;
}