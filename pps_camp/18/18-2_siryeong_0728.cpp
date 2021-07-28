#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int N;
    cin >> N;
    vector<int> dp(100001, INT_MAX);
    dp[0] = 0; dp[1] = 1; dp[2] = 1; dp[5] = 1; dp[7] = 1;
    for(int i = 3;  i <= 100; i++){
        for(int j = i-1; j >= i/2-1; j--)
            dp[i] = (dp[j] + dp[i-j]) > dp[i] ? dp[i] : dp[j] + dp[i-j];
    }
    int re = 0;
    if(N < 100) re = dp[N];
    else re = (N-90)/7 + dp[(90+(N-90)%7)];
    cout << re << "\n";

    return 0;
}