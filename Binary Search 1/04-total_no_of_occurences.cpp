class Solution
{
private:
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

public:
    int count(int arr[], int n, int x)
    {

        int first = firstOccurrence(arr, n, x);
        int second = lastOccurrence(arr, n, x);

        if (first == -1 && second == -1)
        {
            return 0;
        }

        return second - first + 1;
    }
};