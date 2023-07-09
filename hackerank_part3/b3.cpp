#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
int convert(string s)
{
    int ans=0;
    for (int i=0;i<s.size();i++)
    {
        ans=ans*10+s[i]-'0';
    }
    return ans;
}
string timeConversion(string s) 
{
    string test_h="";
    for (int i=0;i<2;i++)
    {
        test_h+=s[i];
    }
    string test_AM_PM="";
    for (int i=8;i<10;i++)
    {
        test_AM_PM+=s[i];
    }
    if (test_AM_PM=="PM" && convert(test_h)<12)
    {
        int test=convert(test_h)+12;
        test_h=to_string(test);
    }
    else if (test_AM_PM=="AM" && convert(test_h)==12)
    {
        test_h="00";
    }
    for (int i=2;i<8;i++)
    {
        test_h+=s[i];
    }
    return test_h;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
