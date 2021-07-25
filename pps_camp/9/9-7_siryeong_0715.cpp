#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    int * x = new int[100001];
    int * y = new int[100001];
    int * xc = new int[100001];
    int * yc = new int[100001];
    for(int i = 0; i <= 100000; i++) {xc[i]=0; yc[i]=0;}
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
        xc[x[i]]++;
        yc[y[i]]++;
    }
    long long int c = 0;
    for(int i = 0; i < N; i++){
        // 자기 자신을 제외한 점들의 갯수의 곱의 합
        c += ((xc[x[i]]-(long long int)1)*(yc[y[i]]-(long long int)1)); 
    }
    cout << c << "\n";

    return 0;
}