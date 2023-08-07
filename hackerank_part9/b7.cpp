#include <bits/stdc++.h>

using namespace std;
void key(string s)
{
    string s1="";
    string s2="";
    for (int i=0;i<s.size();i++)
    {
        if (i%2==0)
        {
            s1+=s[i];
        }
        else s2+=s[i];
    }
    cout << s1 << " " << s2 << '\n';
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        key(s);
    }  
    return 0;
}
