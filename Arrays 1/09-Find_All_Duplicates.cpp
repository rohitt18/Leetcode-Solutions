class Solution
{
    // LeetCode 442

public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        //  for(int i=0;i<nums.size();i++){
        //     if(nums[abs(nums[i])-1]<0)
        //         ans.push_back(abs(nums[i]));
        //     nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        // }

        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if (nums[index - 1] > 0)
            {
                nums[index - 1] *= -1;
            }
            else
            {
                ans.push_back(index);
            }
        }

        return ans;
    }
};
