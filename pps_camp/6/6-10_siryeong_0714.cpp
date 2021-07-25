#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> ss;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < s.length(); j++){
            ss.insert(s.substr(i, j));
        }
    }
    cout << ss.size();
    return 0;
}