/* Viết chương trình nhập vào một bàn cờ ca-rô kích thước m dòng, n cột  (m,n≤100) và in ra:

     −1 nếu quân O thua (X thắng)
     1 nếu quân O thắng (X thua);
     0 nếu không ai thắng (hoặc cả 2 cùng thắng).
*/
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int ngang(char board[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int O = 0;
    int X = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 4; j++)
        {
            if (board[i][j] != '.' && board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && board[i][j] == board[i][j + 4])
            {
                if (board[i][j] == 'O')
                {
                    O = 1; // QuC"n O tha:/ng
                }
                if (board[i][j] == 'X')
                {
                    X = -1; // QuC"n X tha:/ng
                }
            }
        }
    }
    return O + X;
}

int doc(char board[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int O = 0;
    int X = 0;
    for (int i = 0; i < m - 4; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != '.' && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j] && board[i][j] == board[i + 4][j])
            {
                if (board[i][j] == 'O')
                {
                    O = 1; // QuC"n O tha:/ng
                }
                else if (board[i][j] == 'X')
                {
                    X = -1; // QuC"n X tha:/ng
                }
            }
        }
    }
    return O + X;
}

int cheo1(char board[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int O = 0;
    int X = 0;
    for (int i = 0; i < m - 4; i++)
    {
        for (int j = 0; j < n - 4; j++)
        {
            if (board[i][j] != '.' && board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] == board[i + 3][j + 3] && board[i][j] == board[i + 4][j + 4])
            {
                if (board[i][j] == 'O')
                {
                    O = 1;
                }
                else if (board[i][j] == 'X')
                {
                    X = -1;
                }
            }
        }
    }
    return O + X;
}

int cheo2(char board[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int O = 0;
    int X = 0;
    for (int i = 4; i < m; i++)
    {
        for (int j = 0; j < n - 4; j++)
        {
            if (board[i][j] != '.' && board[i][j] == board[i - 1][j + 1] && board[i][j] == board[i - 2][j + 2] && board[i][j] == board[i - 3][j + 3] && board[i][j] == board[i - 4][j + 4])
            {
                if (board[i][j] == 'O')
                {
                    O = 1;
                }
                else if (board[i][j] == 'X')
                {
                    X = -1;
                }
            }
        }
    }
    return O + X;
}

int checkWin(char board[MAX_SIZE][MAX_SIZE], int m, int n)
{

    int x = ngang(board, m, n);
    int y = doc(board, m, n);
    int z = cheo1(board, m, n);
    int t = cheo2(board, m, n);
    return x + y + z + t;
}

int main()
{
    char board[MAX_SIZE][MAX_SIZE];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    int result = checkWin(board, m, n);
    cout << result;
}
