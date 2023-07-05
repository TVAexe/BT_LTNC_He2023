//Viết hàm kiểm tra xem hai xâu có giống nhau không nếu không phân biệt chữ hoa và chữ thường.

#include <bits/stdc++.h>
using namespace std;
string low(string s)
{
    for (int i = 0; i < (int)s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
bool isEqualCaseInsensitive(string s1, string s2)  // hàm đề bài bắt viết
{
    s1 = low(s1);
    s2 = low(s2);
    return (s1 == s2);
}

int main()
{
    // code giả định để test
    string s1, s2;
    cin >> s1 >> s2;
    if (isEqualCaseInsensitive(s1, s2))
    {
        cout << "true";
    }
    else
        cout << "false";
}