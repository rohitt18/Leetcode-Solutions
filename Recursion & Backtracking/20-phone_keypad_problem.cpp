class Solution
{
private:
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
    {
        // base case
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        // jis bhi no. ko i point karraha hai usko find karlo
        int number = digits[index] - '0'; // - '0' nahi karte toh char de deta

        // ab yeh number ke liye jo mapping hai voh mujhe bata do
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, mapping);
            // backtrack karte time voh a ko hatana bhi toh padega
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
        {
            return ans;
        }
        string output;
        int i = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, i, ans, mapping);
        return ans;
    }
};