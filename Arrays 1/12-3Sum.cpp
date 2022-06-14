#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;

    int l, r;

    for (int i = 0; i < n - 2; i++)
    {

        for (int j = i + 1; j < n - 1; j++)
        {

            for (int k = j + 1; k < n; k++)
            {

                vector<int> temp;

                if (arr[i] + arr[j] + arr[k] == K)
                {

                    temp.push_back(arr[i]);

                    temp.push_back(arr[j]);

                    temp.push_back(arr[k]);

                    sort(temp.begin(), temp.end());

                    if (find(ans.begin(), ans.end(), temp) == ans.end())

                    {

                        ans.push_back(temp);
                    }
                }
            }
        }
    }

    return ans;
}