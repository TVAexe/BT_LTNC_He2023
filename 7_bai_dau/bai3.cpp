/* Cho 2 mảng các số nguyên a và b.
Trong đó, mảng b được tạo ra bằng cách hoán vị các phần tử của mảng a và chèn thêm một phần tử không có trong a vào một vị trí bất kì.
In ra phần tử được chèn thêm đó.
*/
#include <bits/stdc++.h>
using namespace std;
bool tontai(vector<int> mang, int x)
{
    bool check = false;
    for (int i = 0; i < (int)mang.size(); i++)
    {
        if (mang[i] == x)
        {
            check = true;
            break;
        }
    }
    return check;
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
    for (int i = 0; i < n + 1; i++)
    {
        if (tontai(mang1, mang2[i]) == false)
        {
            cout << mang2[i];
            break;
        }
    }
}