#include <bits/stdc++.h>
using namespace std;

int main()
{
    float re = 1000000000;
    float x, y;
    cin >> x >> y;
    if(re > x*1000/y) re = x*1000/y;
    int n;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(re > x*1000/y) re = x*1000/y;
    }
    cout.precision(2);
    cout << fixed;

    cout << re;

    return 0;
}