class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        // no of element
        int count = 0;

        // total no of element
        int total = row * col;

        // index initialisation (index hai isliye -1 kiya hai)
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        // jo bhi element ko print karata jauga usko count mai add kar duga
        while (count < total)
        {

            // print starting row
            for (int i = startingCol; count < total && i <= endingCol; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                // jabhi koi element add/print karenge tab count badhana tha
                count++;
            }
            startingRow++;

            // print ending column
            for (int i = startingRow; count < total && i <= endingRow; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // print ending row
            for (int i = endingCol; count < total && i >= startingCol; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // print starting column
            for (int i = endingRow; count < total && i >= startingRow; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};