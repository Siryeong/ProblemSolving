#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m[2][500001] = {{0,},};
    int N;
    bool k = 0;
    cin >> N;
    if(N==1){ cout << 1; return 0; }
    if(N==2){ cout << 2; return 0; }
    //init
    for(int i = 1; i <= N; i++){
        m[k][i] = i;
    }
    while(N>1){
        if(N%2 == 0){
            for(int i = 2; i <= N; i+=2)
                m[!k][i/2] = m[k][i];
            k = !k;
            N /= 2;
        }
        else{
            m[!k][1] = m[k][N];
            for(int i = 2; i <= N-1; i+=2)
                m[!k][i/2+1] = m[k][i];
            k = !k;
            N = N/2 + 1;
            
        }
    }
    cout << m[k][1];

    return 0;
}

// 1 2 3 4 5 6 7 8 9
// (1) 2 (3) 4 (5) 6 (7) 8 9
// (9) 2 (4) 6 8
// 8 2 6


// (1) 2 (3) 4 (5) 6 (7) 8
// (2) 4 (6) 8
// 4 8
// 8

// (1) 2 (3) 4 (5) 6 (7) 8 (9) 10
// (2) 4 (6) 8 10
// (10) 4 8
// 8 4