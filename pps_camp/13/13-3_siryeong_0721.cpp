#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for(int i:v){
        if(i <= L) L++;
        else break;
    }

    cout << L << "\n";

    return 0;
}