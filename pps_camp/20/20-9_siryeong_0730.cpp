#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);
    int arr[501][501] = {{0,},};
    int t;
    cin >> t;
    while(t--){
        // io
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <=n; i++){
            for(int j = 1; j <= m; j++)
                cin >> arr[i][j];
        }
        bool re=true;
        for(int j = 1; j <= n-1 && re; j++){
            for(int l = j+1; l <= n && re; l++){
                for(int i = 1; i <= m-1 && re; i++){
                    // 차가 가로로 오름차순이면됨
                    if((arr[j][i]-arr[l][i]) > (arr[j][i+1]-arr[l][i+1])){
                        re = false;
                    }
                }
            }
        }

        if(re)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}