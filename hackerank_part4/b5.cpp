#include <bits/stdc++.h>
using namespace std;
int tong(vector<int> x)
{
    int tong = 0;
    for (int i = 0; i < x.size(); i++)
    {
        tong += x[i];
    }
    return tong;
}
int main()
{
    int n;
    cin >> n;
    vector<int> mang1;
    vector<int> mang2;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        mang1.push_back(j);
    }
    for (int i = 0; i < n + 1; i++)
    {
        int j;
        cin >> j;
        mang2.push_back(j);
    }
    cout << tong(mang2) - tong(mang1);
}