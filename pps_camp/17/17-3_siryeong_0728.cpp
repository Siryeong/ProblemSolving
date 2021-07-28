#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll N;
    cin >> N;
    ll W[N+1] = {0,};
    for(int i = 1; i <= N; i++)
        cin >> W[i];
    ll dp[N+1] = {0,};
    dp[0] = 0;
    dp[1] = W[1];

    if(N > 1)
        dp[2] = W[1]*2 > W[2] ? W[1]*2 : W[2];

    for(int i = 3; i <= N; i++){
        dp[i] = W[i];

        for(int j = i-1; j>0; j--)
            dp[i] = dp[i] > dp[j]+dp[i-j] ? dp[i] : dp[j]+dp[i-j];
            
    }
    cout << dp[N] << "\n";

    return 0;
}