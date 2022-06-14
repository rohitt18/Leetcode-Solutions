int binarysearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            return mid;
        }
        if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}



























































// #include <iostream>
// using namespace std;

// // increasing or decreasing array

// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;

//     while (start <= end) // tab tak game chalne do
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else //  key < arr[mid]
//         {
//             end = mid - 1;
//         }

//         // start & end update ho gaye honge isliye mid bhi update karna padega
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }

// int main()
// {
//     int even[6] = {2, 4, 6, 8, 12, 18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     cout << "Index of 6 is " << binarySearch(even, 6, 6) << endl;
//     cout << "Index of 14 is " << binarySearch(odd, 5, 14) << endl;
// }