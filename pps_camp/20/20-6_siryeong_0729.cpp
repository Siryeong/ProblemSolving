#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int re = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if(v[i]+v[j]+v[k] <= m){
                    re = re > v[i]+v[j]+v[k] ? re : v[i]+v[j]+v[k];
                }
            }
        }
    }
    cout << re << "\n";
    return 0;
}