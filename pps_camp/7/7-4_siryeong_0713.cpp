#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> ss;
    string s;
    cin >> s;
    ss.insert(s);
    int len = s.length();
    for(int i = 1; i < len; i++)
        ss.insert(s.substr(i, len-i));
    for(auto iter:ss)
        cout << iter << "\n";
    
    return 0;
}