#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    set<int>test;
    for (int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        if (x==1)
        {
            test.insert(y);
        }
        if (x==2)
        {
            test.erase(y);
        }
        if (x==3)
        {
            if (test.find(y)!=test.end())
            {
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
    }
    
}

