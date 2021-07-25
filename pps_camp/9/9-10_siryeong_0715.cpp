#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int re = -1;
    for(int i = 0; i < n/3 + 1; i++){
        if((n - i*3)%5 == 0){
            re = i + (n - i*3)/5;
            break;
        }
    }
    cout << re << "\n";

    return 0;
}
