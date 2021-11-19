#define ll long long
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    ll n ,t;
    cin >> n >> t;

    int p[100000], v[100000];

    for(int i = 0; i < n; i++)
        cin >> p[i] >> v[i];

    int result = 1;
    ll cur =  p[n-1] + v[n-1] * t;
    for(int i = n-2; i >= 0; i--){
        ll prev = p[i] + v[i] * t;
        if(prev < cur){
            cur = prev;
            result++;
        }
    }
    cout << result << "\n";
    return 0;
}