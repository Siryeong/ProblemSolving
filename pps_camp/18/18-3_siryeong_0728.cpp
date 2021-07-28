#include <bits/stdc++.h>
using namespace std;
#define MAX(a, b) (a) > (b) ? (a) : (b)

int main()
{
    int n;
    cin >> n;

    vector<int> a(n, 0);
    vector<int> dp(n, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        dp[i] = a[i];
    }
    for(int i = n-2; i >= 0; i--){
        int t = dp[i];
        for(int k = n-1; k >= i+1; k--){
            if(a[i] > a[k])
                dp[i] = MAX(dp[i], t + dp[k]);
        }
    }
    int re = 0;
    for(int i = 0; i < n; i++)
        re = MAX(re, dp[i]);
    cout << re << "\n";
    
    return 0;
}