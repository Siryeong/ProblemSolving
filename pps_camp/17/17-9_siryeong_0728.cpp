#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll N;
    cin >> N;
    vector<ll> p(N);
    for(ll i = 0; i < N; i++)
        cin >> p[i];
    sort(p.begin(), p.end());

    ll sum = 0;
    ll re = 0;
    for(ll i = 0; i < N; i++){
        sum += p[i];
        re += sum;
    }
    cout << re << "\n";
    
    return 0;
}