#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   vector <int> mang;
   int n;
   cin >> n;
   int dem=0;
      while (dem <n)
      {
          int x;
          cin >> x;
          mang.push_back(x);
          dem++;
      }
      sort(mang.begin(),mang.end());
      for (int i=0;i<mang.size();i++)
      {
          cout << mang[i] << " ";
      }
    return 0;
}
