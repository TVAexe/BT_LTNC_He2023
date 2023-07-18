#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    map<string, int> mp;
    while (n--) {
        int k; cin >> k;
        if (k==1) {
            string ten;
            int diem;
            cin >> ten >> diem;
            auto it = mp.find(ten);
            if (it == mp.end()) {
                mp[ten] = diem;
            }
            else {
                int tmp2 = mp[ten];
                mp[ten] += diem;
            }
        }
        else if (k==2) {
            string ten; cin >> ten;
            mp[ten] = 0;
        }
        else {
            string ten; cin >> ten;
            cout << mp[ten] << endl;
        }
    }
}