#include <bits/stdc++.h>

void solve(string str, int index, vector<string> &ans)
{
    // base case
    if (index >= str.length())
    {
        ans.push_back(str);
        return;
    }

    for (int i = index; i < str.length(); i++)
    {
        swap(str[index], str[i]);
        solve(str, index + 1, ans);
        // backtrack
        swap(str[index], str[i]); // to neutralize the effect
    }
}

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    int index = 0;
    solve(str, index, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

// Leetcode 46: Permutations
class Solution
{
private:
    void solve(vector<int> &nums, int index, vector<vector<int>> &ans)
    {
        // base case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            solve(nums, index + 1, ans);
            // backtrack
            swap(nums[index], nums[i]); // to neutralize the effect
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }
};