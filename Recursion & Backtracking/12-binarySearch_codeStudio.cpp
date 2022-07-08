int solve(int *arr, int s, int e, int k)
{

    // base case
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return mid;

    if (arr[mid] < k)
    {
        return solve(arr, mid + 1, e, k);
    }
    else
    {
        return solve(arr, s, mid - 1, k);
    }
}

int binarySearch(int *input, int n, int val)
{
    int s = 0;
    int e = n - 1;

    solve(input, s, e, val);
}