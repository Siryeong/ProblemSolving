#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(1);
    v[0]=666;
    ll t = 667;

    while(v.size() <= 10000){
        string s = to_string(t++);
        for(int i = 0; i < s.length()-2; i++){
            if(s[i]=='6' && s[i+1]=='6' && s[i+2]=='6'){
                v.push_back(t-1);
                break;
            }
        }
    }

    cout << v[n-1] << "\n";
    return 0;
}