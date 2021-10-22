#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define ull unsigned long long
using namespace std;

typedef struct _stepfunc{
    int x;
    int y;
} stepfunc;

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int kf, kg, p, q, x, y;
    queue< stepfunc > f, g;

    cin >> kf;
    for(int i = 0; i < kf; i++){
        cin >> x >> y;
        f.push({x, y});
    }
    cin >> kg;
    for(int i = 0; i < kg; i++){
        cin >> x >> y;
        g.push({x, y});
    }
    cin >> p >> q;

    vector< stepfunc > merged(kf+kg+2);
    merged[0] = {(int)0x80000000, 0};
    int fi = 0, gi = 0, cur_max = 0, idx = 1;
    while(fi != 0x7fffffff || gi != 0x7fffffff){
        if(f.empty()) fi = 0x7fffffff;
        else          fi = f.front().x;
        if(g.empty()) gi = 0x7fffffff;
        else          gi = g.front().x;
        
        if (fi < gi){
            if(cur_max < f.front().y){
                cur_max = f.front().y;
                merged[idx++] = {fi, cur_max};
            }
            f.pop();
        }
        else if (fi > gi){
            if(cur_max < g.front().y){
                cur_max = g.front().y;
                merged[idx++] = {gi, cur_max};
            }
            g.pop();
        }
        else{
            if(fi != 0x7fffffff){
                cur_max = max(f.front().y, g.front().y);
                f.pop();
                g.pop();
            }
            merged[idx++] = {fi, cur_max};
        }
    }

    ull result = 0;
    int i;
    for(i = 1; merged[i].x <= q; i++){
        if(p < merged[i].x){
            result += (ull)(merged[i].x - p)*(ull)merged[i-1].y;
            result %= 10007;
            p = merged[i].x;
        }
    }
    result += (ull)(q-p+1)*(ull)merged[i-1].y;
    result %= 10007;
    cout << result << "\n";

    return 0;
}