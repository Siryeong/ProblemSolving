#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    bool m[N] = {0,};
    int c = 0;
    bool tmp;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp != m[i]){
            m[i] = !m[i];
            if(i+1 < N) m[i+1] = !m[i+1];
            if(i+2 < N) m[i+2] = !m[i+2];
            c++;
        }
    }
    cout << c << "\n";

    return 0;
}