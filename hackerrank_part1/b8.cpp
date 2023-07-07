#include <bits/stdc++.h>
using namespace std;
bool check (int a[], int n, int sum) {
    int sl=0;
    for (int i=0; i<n; i++) {
        if (sl*2 == sum-a[i]) return true;
        sl+=a[i];
    }
    return false;
}
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int sum=0;
        for (int &x:a) {
            cin >> x; 
            sum+=x;
        }
        if (check(a, n, sum)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}