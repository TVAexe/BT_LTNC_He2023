#include <iostream>
#include <vector>
#include <string>

    using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    for (int i = 0; i < col; i++)
        if (board[row][i] == 'Q')
            return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q')
            return false;
    for (int i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j] == 'Q')
            return false;
    return true;
}

bool solveNQueensUtil(vector<string> &board, int col, vector<vector<string>> &result, int n)
{
    if (col == n) // xếp đủ thì push vào cái vector kết quả
    {
        result.push_back(board);
        return true;
    }
    bool res = false;
    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, i, col, n)) // đặt thử từng con hậu vào mỗi ô nếu ô đó đặt dc
        {
            board[i][col] = 'Q';
            res = solveNQueensUtil(board, col + 1, result, n) || res; //đặt hậu vào ô ở cột kế tiếp 
            board[i][col] = '.';
        }
    }
    return res;
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> result;
    vector<string> board(n);
    string s(n, '.'); // sinh xâu s có n dấu .
    for (int i = 0; i < n; i++)
        board[i] = s;
    solveNQueensUtil(board, 0, result, n);
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<string>> result = solveNQueens(n);
    cout << "[";
    for (int i = (int)result.size() - 1; i >= 0;  i--)
    {
        cout << "[";
        for (int j = 0; j < (int)result[i].size(); j++)
        {
            cout << "\"" << result[i][j] << "\"";
            if (j != (int)result[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i != 0)
            cout << ",";
    }
    cout << "]";
    return 0;
}