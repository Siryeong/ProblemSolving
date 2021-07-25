#include <bits/stdc++.h>
using namespace std;

auto comp = [](string a, string b) {
    if(a.length()==b.length()) return a < b;
    else return a.length() < b.length();
};

int main()
{
    ios::sync_with_stdio(0); cin.tie(0x0); cout.tie(0x0);

    int N;
    cin >> N;
    set<string, decltype(comp)> ss(comp);
    for(int i = 0; i < N; i++){
        string t;
        cin >> t;
        ss.insert(t);
    }

    for(auto i:ss)
        cout << i << "\n";

    return 0;
}