#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);

    int m, w;
    int count[100001] = {0,};

    cin >> m;
    while( cin >> w )
        count[w]++;

    int small = 0, big = m, result = 0;
    
    while(small < big){
        int tmp = 0;
        result += count[big];
        if(count[small] > count[big])
            tmp = count[small] - count[big];
        count[small] = 0;
        count[big] = 0;
        count[small+1] += tmp;
        big--; small++;
    }
    result += count[small]/2;
    result += count[small]%2;

    cout << result << "\n";
    
    return 0;
}