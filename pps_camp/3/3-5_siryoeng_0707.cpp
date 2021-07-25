#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    bool k;
    double yy, yn, ny, nn;
    double dp[2][101] = {{0,},};
    cin >> n >> k;
    cin >> yy >> yn >> ny >> nn;
    dp[k][0] = 1;
    dp[!k][0] = 0;

    cout.precision(0);
    cout << fixed;

    for(int i = 0; i < n; i++){
        dp[0][i+1] = dp[0][i]*yy + dp[1][i]*ny;
        dp[1][i+1] = dp[0][i]*yn + dp[1][i]*nn;
    }
    cout << dp[0][n]*1000 << "\n";
    cout << dp[1][n]*1000 << "\n";

    return 0;
}