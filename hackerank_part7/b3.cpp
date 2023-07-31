#include <iostream>
#include <cmath>
using namespace std;

int countWays(int x, int n, int num) {
   
    if (x == 0) {
        return 1;
    }

    if (x < 0) {
        return 0;
    }

    int ways = 0;

    
    for (int i = num; pow(i, n) <= x; i++) {
        ways += countWays(x - pow(i, n), n, i + 1);
    }

    return ways;
}

int main() {
    
    int x;
    int n;
    cin >> x >> n;
    
    int ans=countWays( x, n, 1);

    
    cout << ans;

    return 0;
}
