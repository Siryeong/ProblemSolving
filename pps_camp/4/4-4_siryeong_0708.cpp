#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int dp[15][15];
    for(int i = 0; i < 15; i++)
        dp[0][i] = i;
    int s = 0;
    for(int j = 1; j < 15; j++){
        s = 0;
        for(int i = 0; i < 15; i++){
            s += dp[j-1][i];
            dp[j][i] = s;
        }
    }

    while(t--){
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }
    return 0;
}