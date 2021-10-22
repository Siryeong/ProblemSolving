#include <iostream>
using namespace std;

int main()
{
    int n, dest[51] = {0,};
    cin >> n >> dest[n];
    dest[n]--;

    int hanoi[3][51] = {{0,},};
    int init_rod[51] = {0,};
    for(int rod = 0; rod < 3; rod++){
        cin >> hanoi[rod][0];
        for(int disk = 1; disk <= hanoi[rod][0]; disk++){
            cin >> hanoi[rod][disk];
            init_rod[ hanoi[rod][disk] ] = rod;
        }
    }

    long long result = 0;
    for(int i = n; i > 0; i--){
        if(init_rod[i] == dest[i]) dest[i-1] = init_rod[i];
        else {
            dest[i-1] = 3 - dest[i] - init_rod[i];
            result += (1 << (i-1));
        }
    }

    cout << result << "\n";

    return 0;
}