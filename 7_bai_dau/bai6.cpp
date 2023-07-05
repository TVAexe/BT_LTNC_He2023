/*Hai chuỗi là anagram của nhau nếu các chữ cái của chuỗi này có thể được sắp xếp để tạo thành chuỗi kia.
 Một nhóm anagram có thể hiểu là một mảng mà các phần tử trong đó đôi một là hai chuỗi anagram của nhau.

Viết chương trình nhập vào số nguyên n là độ dài của mảng xâu kí tự,
n dòng tiếp theo là các phần tử thuộc mảng xâu kí tự, mỗi dòng là một xâu kí tự.

In ra true nếu các phần tử thuộc mảng đôi một là anagram của nhau, ngược lại in ra false
Chương trình không phân biệt chữ hoa chữ thường, không quan tâm đến các dấu câu và dấu cách.*/
#include <bits/stdc++.h>
using namespace std;
bool kiemtra(char kyTu)
{
    return (kyTu >= 97 && kyTu <= 122) || (kyTu >= 65 && kyTu <= 90);
}

string create(string s)
{
    string ans = "";
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (kiemtra(s[i]))
        {
            ans += s[i];
        }
    }
    return ans;
}
bool checkAnagram(string s, string t)
{
    s = create(s);
    t = create(t);
    if ((int)s.size() != (int)t.size())
        return false;

    int n = (int)s.size();
    int m = (int)t.size();

    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < m; i++)
    {
        t[i] = tolower(t[i]);
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            return false;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> test;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        test.push_back(s);
    }
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!checkAnagram(test[i], test[j]))
            {
                check = false;
                break;
            }
        }
    }
    if (check == true)
    {
        cout << "true";
    }
    else
        cout << "false";
}