#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
     cin >> n;
     vector<int> test;
     for (int i=0;i<n;i++)
     {
         int x;
         cin >> x;
         test.push_back(x);
     }
     int x;
     int y,z;
     cin >> x;
     cin >> y >> z;
     test.erase(test.begin()+x-1);
     test.erase(test.begin()+y-1,test.begin()+z-1);
     cout << test.size();
     cout << "\n";
     for (int i=0;i<test.size();i++)
     {
         cout << test[i] << " ";
     }
    return 0;
}
