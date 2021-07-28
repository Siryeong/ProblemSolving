#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX(a, b) (a) > (b) ? (a) : (b)

ll table[501][501] = {{0,},};
ll m[501][501] = {{0,},};

int dfs(int n, int i, int j){
    if(m[i][j] > 0) return m[i][j];
    ll mx = 0;
    if(i > 0 && table[i-1][j] < table[i][j]) // 상
        mx = MAX(mx, dfs(n, i-1, j));
    if(i < n-1 && table[i+1][j] < table[i][j]) // 하
        mx = MAX(mx, dfs(n, i+1, j));
    if(j > 0 && table[i][j-1] < table[i][j]) // 좌
        mx = MAX(mx, dfs(n, i, j-1));
    if(j < n-1 && table[i][j+1] < table[i][j]) // 우
        mx = MAX(mx, dfs(n, i, j+1));
    m[i][j] = mx+1;
    return m[i][j];
}

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> table[i][j];
    }
    ll re = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            re = MAX(re, dfs(n, i, j));
        }
    }
    cout << re << "\n";

    return 0;
}