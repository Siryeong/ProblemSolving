#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int> > v(100001);
    for(int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.begin()+N, comp);

    for(int i = 0; i < N; i++)
        cout << v[i].first << " " << v[i].second << "\n";

    return 0;
}