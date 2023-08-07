#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    map<string, string> mp;
    for (int i=0;i<n;i++)
    {
        string name, num_phone; cin >> name >> num_phone;
        mp[name] = num_phone;
    } 
    string t; 
    while(cin >> t){
        
        if( mp.find(t) != mp.end()){
            cout << t << "=" << mp[t] << endl;
        }
        else cout << "Not found" << endl;
    }
    return 0;
}