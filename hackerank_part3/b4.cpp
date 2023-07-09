#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
bool hoa (char s)
{
    return (s>='A' && s<='Z');
}
bool thuong (char s)
{
    return (s>='a' && s<='z');
}
int camelcase(string s) 
{
   int ans=1;
   for (int i=0;i<s.size();i++)
   {
       if (hoa(s[i+1]) && thuong(s[i]))
       {
           ans++;
       }
   }
   return  ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
