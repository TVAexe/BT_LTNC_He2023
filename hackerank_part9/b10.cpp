#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else return n*factorial(n-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout <<  factorial(n);
    return 0;
}
