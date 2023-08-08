#include <iostream>
#include <vector>
using namespace std;

int maxProfit = 0;

void backtrack(vector<int> &p, int year, int left, int right, int profit) {
    if (left > right) {
        maxProfit = max(maxProfit, profit);
        return;
    }
    backtrack(p, year + 1, left + 1, right, profit + year * p[left]);
    backtrack(p, year + 1, left, right - 1, profit + year * p[right]);
}

int main() {
    int n;
    cin >> n;
    vector<int> p;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    backtrack(p, 1, 0, n - 1, 0);
    cout << maxProfit << endl;
    return 0;
}