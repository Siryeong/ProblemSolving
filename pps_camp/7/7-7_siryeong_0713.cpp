#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    int * arr = new int[5000001];
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr+N);

    cout << arr[K-1] << "\n";
    

    return 0;
}