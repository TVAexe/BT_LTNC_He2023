#include<bits/stdc++.h>
using namespace std;
int R=6,C=6;
int key[1000][1000];

int findMaxSum(int mat[1000][1000],int R,int C)
{
    int max_sum = INT_MIN;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            
            int sum = (mat[i][j]+mat[i][j+1]+mat[i][j+2])+
                      (mat[i+1][j+1])+
                  (mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2]);
 
            
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int main()
{
    for (int i=0;i<R;i++)
    {
        for (int j=0;j<C;j++)
        {
            cin >> key[i][j];
        }
    }
    int res = findMaxSum(key,R,C);
    cout << res << endl;
    return 0;
}

