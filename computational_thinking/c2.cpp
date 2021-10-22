#include <iostream>
using namespace std;

#define MAX(a, b) (a) > (b) ? (a) : (b)
#define ll long long

ll mountain[500][500] = {0,};
ll tmp[500][500] = {0,};

ll dfs(int i, int j, int n){
    if(tmp[i][j] != 0) return tmp[i][j];

    if(i > 0 && mountain[i][j] > mountain[i-1][j])
        tmp[i][j] = MAX(tmp[i][j], mountain[i][j] - mountain[i-1][j] + dfs(i-1, j, n));

    if(i < n-1 && mountain[i][j] > mountain[i+1][j])
        tmp[i][j] = MAX(tmp[i][j], mountain[i][j] - mountain[i+1][j] + dfs(i+1, j, n));

    if(j > 0 && mountain[i][j] > mountain[i][j-1])
        tmp[i][j] = MAX(tmp[i][j], mountain[i][j] - mountain[i][j-1] + dfs(i, j-1, n));

    if(j < n-1 && mountain[i][j] > mountain[i][j+1])
        tmp[i][j] = MAX(tmp[i][j], mountain[i][j] - mountain[i][j+1] + dfs(i, j+1, n));

    return tmp[i][j];
}

int main(){
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> mountain[i][j];
    }

    ll result = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            result = MAX(result, dfs(i,j,n));
    }

    cout << result << "\n";

    return 0;    
}