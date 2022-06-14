#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {

        int pivot = getPivot(arr);
        if (target >= arr[pivot] && target <= arr[arr.size() - 1])
        {
            // B.S on II Line
            return binarySearch(arr, pivot, arr.size() - 1, target);
        }
        else
        {
            // B.S on I Line
            return binarySearch(arr, 0, pivot - 1, target);
        }
    }

    int getPivot(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] >= arr[0])
            { // line 1
                s = s + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int> &arr, int s, int e, int key)
    {
        int start = s;
        int end = e;

        int mid = start + (end - start) / 2;

        while (start <= end) // tab tak game chalne do
        {
            if (arr[mid] == key)
            {
                return mid;
            }
            if (key > arr[mid])
            {
                start = mid + 1;
            }
            else //  key < arr[mid]
            {
                end = mid - 1;
            }

            // start & end update ho gaye honge isliye mid bhi update karna padega
            mid = start + (end - start) / 2;
        }
        return -1;
    }
};