#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
    if(a.length()==b.length()) return a < b;
    else return a.length() < b.length();
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0x0); cout.tie(0x0);

    int N;
    cin >> N;
    set<string> ss;
    for(int i = 0; i < N; i++){
        string t;
        cin >> t;
        ss.insert(t);
    }
    vector<string> v(ss.begin(), ss.end());
    sort(v.begin(), v.end(), comp);

    for(auto iter:v)
        cout << iter << "\n";

    return 0;
}