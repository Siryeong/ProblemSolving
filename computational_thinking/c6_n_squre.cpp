#define MAX_CARDS 50001
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);
    int n;
    cin >> n;

    int * cards = new int[MAX_CARDS];
    int * inc = new int[MAX_CARDS];
    int * dec = new int[MAX_CARDS];

    for(int c = 0; c < n; c++){
        cin >> cards[c];
        int mx = -1;
        for(int p = 0; p < c; p++){
            if( (cards[p] < cards[c]) && (mx < inc[p]) )
                mx = inc[p];
        }
        inc[c] = mx+1;
    }

    for(int c = n-1; c >= 0; c--){
        int mx = -1;
        for(int p = n-1; p > c; p--){
            if( (cards[p] < cards[c]) && (mx < dec[p]) )
                mx = dec[p];
        }
        dec[c] = mx+1;
    }

    int result = 1;
    for(int i = 0; i < n; i++)
        result = max(result, inc[i] + dec[i] + 1);
    
    cout << result << "\n";

    return 0;
}