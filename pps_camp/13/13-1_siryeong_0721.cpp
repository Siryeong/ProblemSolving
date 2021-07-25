#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> v(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];

    int c = 0, j = N-1;
    while(K>0){
        if(K >= v[j]){
            K -= v[j];
            c++;
        }else{
            j--;
        }
    }

    cout << c << "\n";
    
    return 0;
}