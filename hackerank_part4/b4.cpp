#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // create an 2d vector array
    vector<vector<int>> v(n);

    // input vector element
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        v[i].resize(size);

        for (int j = 0; j < size; j++)
        {
            cin >> v[i][j];
        }
    }

    // print index value
    while (q--)
    {
        int k, l;
        cin >> k >> l;
        cout << v[k][l] << endl;
    }
    return 0;
}
