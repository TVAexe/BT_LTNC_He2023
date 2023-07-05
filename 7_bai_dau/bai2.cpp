// Viết chương trình nhập vào một mảng các số nguyên dương và in ra phần dư của tích các số này khi chia cho 1307
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector <long long> mang;
    for (int i=0;i<n;i++)
    {
        long long u;
        cin >> u;
        mang.push_back(u);
    }
    long long tich=1;
    for (int i=0;i<n;i++)
    {
        tich*=(mang[i]%1307);
        tich%=1307;
    }
    cout << tich;
}