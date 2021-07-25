#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> m = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string s;
    cin >> s;

    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(m.find(s.substr(i, 2)) != m.end())
            i++;
        else if(m.find(s.substr(i, 3)) != m.end())
            i+=2;
        c++;
    }
    cout << c << "\n";
    return 0;
}