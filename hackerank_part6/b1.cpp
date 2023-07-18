#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Human 
{
    int age;
    string ho;
    string ten;
    int stand;
};

int main() {
    Human test;
    cin >> test.age >> test.ho >> test.ten >> test.stand;
    cout << test.age <<  " " << test.ho << " " << test.ten << " " << test.stand; 
    return 0;
}
