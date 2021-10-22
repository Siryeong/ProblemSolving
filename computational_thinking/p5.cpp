#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int n, k;
    cin >> n >> k;
    double poles[n] = {0.0,};
    for(int i = 0; i < n; i++)
        cin >> poles[i];
    sort(poles, poles+n);

    double max_dist = (poles[n-1] - poles[0])/2.0;
    double half = max_dist/2.0;

    while(half >= 0.25){
        int past = 0;
        int count = 1;
        for(int cur = 1; cur < n; cur++){
            if( poles[cur] - poles[past] >= max_dist){
                past = cur;
                count++;
            }
        }
        if(count >= k)
            max_dist += half;
        else
            max_dist -= half;
        half  = half/2.0;
    }
    cout << (int)round(max_dist) << "\n";
    return 0;
}