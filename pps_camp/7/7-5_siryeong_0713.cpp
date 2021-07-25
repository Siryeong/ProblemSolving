#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    return a > b;
}
int main()
{
    int N;
    cin >> N;
    int m[10];
    int i=0;
    while(N > 0){
        m[i++] = N%10;
        N /= 10;
    }
    sort(m, m+i, comp);
    for(int j = 0; j < i; j++)
        cout << m[j];
    cout << "\n";

    return 0;
}