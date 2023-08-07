#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Xu_ly(int x)
{
    if (x<0)
    {
        cout << "Age is not valid, setting age to 0.\n";
        x=0-x;
        for (int i=0;i<2;i++)
        {
        if (x<13)
        {
            cout << "You are young.\n";
        }
        else if (13<=x && x<=18)
        {
            cout << "You are a teenager.\n";
        }
        else if (x>18)
        {
            cout << "You are old.\n";
        }
        x+=3;
        }
        
    }
    else 
    {
        for (int i=0;i<2;i++)
        {
        if (x<13)
        {
            cout << "You are young.\n";
        }
        else if (13<=x && x<18)
        {
            cout << "You are a teenager.\n";
        }
        else if (x>=18)
        {
            cout << "You are old.\n";
        }
        x+=3;
        }
        
    }
  
    
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        Xu_ly(x);
        if (i<n-1)
        {
            cout << '\n';
        }
    }
    return 0;
}
