class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n)
        {
            int j = i + 1;
            while (j < n && chars[i] == chars[j])
            {
                j++;
            }
            // yaha kab aoge
            // ya toh vector pura traverse kardia
            // ya fir new/different char encounter kiya

            // oldChar store karlo
            chars[ansIndex++] = chars[i];

            int count = j - i;

            if (count > 1)
            {
                // converting counting into single digit & saving in answer
                string cnt = to_string(count);
                for (char ch : cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }
            // moving to new/different Character
            i = j;
        }
        return ansIndex;
    }
};