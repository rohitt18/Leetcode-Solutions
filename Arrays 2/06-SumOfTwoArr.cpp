vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
        //             s++;
        //             e--;
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int value1 = a[i];
        int value2 = b[j];
        int sum = value1 + value2 + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
        j--;
    }

    // case 1 (1st array bada hai)
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
    }

    // case 2 (2nd array bada hai)
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // case 3 (carry bacha hua hai)
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
    }

    return reverse(ans); // function
}