#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}

int main()
{
    vector<pair<char, int> > m;
    for(int i = 0; i < 26; i++){
        m.push_back(pair<char,int>('A'+i, 0));
    }
    string s;
    cin >> s;
    for(char c:s){
        if(c >= 'A' && c <= 'Z') m[c-'A'].second++;
        else m[c-'a'].second++;
    }
    sort(m.begin(), m.end(), comp);

    if(m[0].second > m[1].second) cout << m[0].first << "\n";
    else cout << "?\n";

    return 0;
}