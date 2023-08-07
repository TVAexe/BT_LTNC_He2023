#include  <bits/stdc++.h>
using namespace std;
string create(int n)
{
    string key="";
    while (n!=0)
    {
        int temp=n%2;
        if (temp==0)
        {
            key+="0";
        }
        else key+="1";
        n/=2;
    }
    reverse(key.begin(),key.end());
    return key;
}
int main ()
{
    int n;
    cin >> n;
    string key=create(n);
    int dem=1;
    int tam=1;
    for (int i=0;i<key.size();i++)
    {
        if (key[i]==key[i+1])
        {
            dem++;
            if (dem>tam)
            {
                tam=dem;
            }
        }
        else dem=1;
    }
    cout << tam;
}
