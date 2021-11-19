#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible(vector<int> s_count, int n, int d, int k){
    for(int cur = 1, front = 1; cur <= n; cur++){
        if(front + d < cur) return false;
        int tmp = k;
        while(front <= cur){
            if(s_count[front] > tmp){
                s_count[front] -= tmp;
                break;
            }
            else{ // s_count[i] <= tmp
                tmp -= s_count[front];
                s_count[front] = 0;
                front++;
            }
        }
    }
    for(int i = n; i >= 0; i--){
        if(s_count[i] != 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int n, d, m;
    cin >> n >> d >> m;

    vector<int> s_count(n+2, 0);
    for(int i = 0; i < m; i++){
        int s;
        cin >> s;
        s_count[s]++;
    }

    int high = 0, low = 0;
    for(int i = 1; i <= n; i++){
        if(high < s_count[i]) high = s_count[i];
    }
    low = max( (int)(high%(d+1) != 0), m/n + (int)(m%n != 0) );

    while(low <= high){
        int mid = (low+high)/2;
        if(possible(s_count, n, d, mid)) high = mid-1;
        else low = mid+1;
    }
    cout << low << "\n";

    return 0;
}