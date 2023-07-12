#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a=0,b=0;
    cin >> a >> b;  
    int* p= &a;
    int* q= &b;
    cout << (*p + *q) << "\n" << abs(*p - *q) << "\n";
    return 0;
}
