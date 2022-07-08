class Solution
{
private:
    bool isSafe(int x, int y, vector<vector<int>> &m,
                int n, vector<vector<int>> visited)
    {

        if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    

    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x,
               int y, vector<vector<int>> visited, string path)
    {

        // you have reached x,y here

        // base case (agar dest pe pohoch chuka hun toh return kar jao)
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // 4 choices - D,L,R,U

        // down
        int new_x = x + 1;
        int new_y = y;
        if (isSafe(new_x, new_y, m, n, visited))
        {
            path.push_back('D');
            solve(m, n, ans, new_x, new_y, visited, path);
            path.pop_back();
        }
        // left
        new_x = x;
        new_y = y - 1;
        if (isSafe(new_x, new_y, m, n, visited))
        {
            path.push_back('L');
            solve(m, n, ans, new_x, new_y, visited, path);
            path.pop_back();
        }
        // right
        new_x = x;
        new_y = y + 1;
        if (isSafe(new_x, new_y, m, n, visited))
        {
            path.push_back('R');
            solve(m, n, ans, new_x, new_y, visited, path);
            path.pop_back();
        }
        // up
        new_x = x - 1;
        new_y = y;
        if (isSafe(new_x, new_y, m, n, visited))
        {
            path.push_back('U');
            solve(m, n, ans, new_x, new_y, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;

        if (m[0][0] == 0)
            return ans;

        int src_x = 0;
        int src_y = 0;

        vector<vector<int>> visited = m;
        // initialise with 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";
        solve(m, n, ans, src_x, src_y, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};