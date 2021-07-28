#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll> > m(n);
    for(int i = 0; i < n; i++) // first : 끝, second : 시작
        cin >> m[i].second >> m[i].first;
    sort(m.begin(), m.end());

    int c = 0;
    int t = 0;
    for(int i = 0; i < n; i++){
        if(m[i].second >= t){ 
            t = m[i].first; 
            c++;
        }
    }
    cout << c << "\n";

    return 0;
}