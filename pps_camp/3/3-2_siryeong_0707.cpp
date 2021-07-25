#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 1;
    for(char c:s){
        cout << c;
        if((i++)%10==0) cout << "\n";
    }
    return 0;
}