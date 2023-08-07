#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector <int> test;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        test.push_back(x);
    }
    for (int i=n-1;i>=0;i--)
    {
        cout << test[i] << " ";
    }
}
