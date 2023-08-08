#include <bits/stdc++.h>
using namespace std;

vector<string> generateGray(int n) 
{
    if (n <= 0) return {"0"};
    if (n == 1) { return {"0","1"}; }
    vector<string> recAns = generateGray(n-1);
    vector<string> mainAns;
    for(int i=0;i<(int)recAns.size();i++) 
    {
        string s = recAns[i];
        mainAns.push_back("0"+s);
    }
    for(int i=(int)recAns.size()-1;i>=0;i--) 
    {
        string s = recAns[i];
        mainAns.push_back("1"+s);
    }
    return mainAns;
}
int main ()
{
    int n;
    cin >> n;
    vector<string> key;
    key=generateGray(n);
    for (int i=0;i<(int)key.size();i++)
    {
        cout << key[i] << "\n";
    }
}