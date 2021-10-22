#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int p, q, r, n, m;
    cin >> p >> q >> r >> n >> m;
    vector< vector<int> > v2d(n+1);
    while(m--){
        int c1, c2;
        cin >> c1 >> c2;
        v2d[c1].push_back(c2);
        v2d[c2].push_back(c1);
    }

    queue<int> q_n, q_a, q_b;
    int dist_n[40001], dist_a[40001], dist_b[40001];
    fill(dist_n, dist_n + n+1, 0x7fffffff);
    fill(dist_a, dist_a + n+1, 0x7fffffff);
    fill(dist_b, dist_b + n+1, 0x7fffffff);
    dist_n[n] = 0;
    dist_a[1] = 0;
    dist_b[2] = 0;
    q_n.push(n);
    q_a.push(1);
    q_b.push(2);
    
    while(!q_n.empty()){
        int tmp = q_n.front();
        q_n.pop();
        for(int neighbor : v2d[tmp]){
            if(dist_n[neighbor] > dist_n[tmp] + 1){
                dist_n[neighbor] = dist_n[tmp] + 1;
                q_n.push(neighbor);
            }
        }
    }
    while(!q_a.empty()){
        int tmp = q_a.front();
        q_a.pop();
        for(int neighbor : v2d[tmp]){
            if(dist_a[neighbor] > dist_a[tmp] + 1){
                dist_a[neighbor] = dist_a[tmp] + 1;
                q_a.push(neighbor);
            }
        }
    }
    while(!q_b.empty()){
        int tmp = q_b.front();
        q_b.pop();
        for(int neighbor : v2d[tmp]){
            if(dist_b[neighbor] > dist_b[tmp] + 1){
                dist_b[neighbor] = dist_b[tmp] + 1;
                q_b.push(neighbor);
            }
        }
    }

    int result = 0x7fffffff;
    for(int i = 1; i <= n; i++)
        result = min(result, dist_n[i]*r + dist_a[i]*p + dist_b[i]*q);
    
    cout << result << "\n";

    return 0;
}