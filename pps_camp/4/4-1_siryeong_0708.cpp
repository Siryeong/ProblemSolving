#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 0, idx = 0;
    int a, b, c, d;
    for(int i = 0; i < 5; i++){
        cin >> a >> b >> c >> d;
        if(a+b+c+d > max) {
            max = a+b+c+d;
            idx = i+1;
        }
    }
    cout << idx << " " << max << "\n";
    return 0;
}