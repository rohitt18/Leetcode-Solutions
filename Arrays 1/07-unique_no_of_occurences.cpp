class Solution
{
        // LEETCODE 1207

public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int n = arr.size();
        int i = 0;
        while (i < n)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            ans.push_back(count);
            i = i + count;
        }

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};