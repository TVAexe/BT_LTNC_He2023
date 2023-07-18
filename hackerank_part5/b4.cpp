#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> test_case;
    for (int i = 0; i < n; i++)
    {
        int u;
        cin >> u;
        test_case.push_back(u);
    }
    int so_test;
    cin >> so_test;
    for (int i = 0; i < so_test; i++)
    {
        int x;
        cin >> x;
        if (binary_search(test_case.begin(), test_case.end(), x))
        {
            cout << "Yes " << lower_bound(test_case.begin(), test_case.end(), x) - test_case.begin() + 1 << "\n";
        }
        else
        {
            cout << "No " << lower_bound(test_case.begin(), test_case.end(), x) - test_case.begin() + 1 << "\n";
        }
    }
    return 0;
}
