#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
    if(a.length() == b.length()){
        int sa=0, sb=0;
        for(int i = 0; i < a.length(); i++){
            if(a[i] >= '0' && a[i] <= '9') sa += (a[i]-'0');
            if(b[i] >= '0' && b[i] <= '9') sb += (b[i]-'0');
        }
        if(sa==sb) return a < b;
        else return sa < sb;
    }
    else
        return a.length() < b.length();
}

int main()
{
    vector<string> vs;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        vs.push_back(s);
    }
    sort(vs.begin(), vs.end(), comp);
    for(string s:vs)
        cout << s << "\n";

    return 0;
}