#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    cin >> a >> b;
    cout << a.size() << " ";
    cout << b.size() << "\n";
    cout << a+b << "\n";
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout << a << " " << b;
    
    return 0;
}