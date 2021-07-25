#include <bits/stdc++.h>
using namespace std;
#define MIN(a, b) ((a) > (b) ? (b) : (a))

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, w;
    cin >> n;
    vector<pair<int,int> > A(n);
    for(int i = 0; i < n; i++){ // 현재 index 저장
        cin >> w;
        A[i] = pair<int,int>(w, i);
    }
    sort(A.begin(), A.end());

    int sum=0;
    for(int i = 0; i < n; i++){
        int n = 0, s = A[i].first;
        while(A[i].second != i){ // 제위치가 아닌경우
            s += A[A[i].second].first;
            int ti = A[i].second; // swap
            A[i].second = A[ti].second;
            A[ti].second  = ti;
            n++;
        }
        sum += MIN(s + (n-1)*A[i].first, s + (n+2)*A[0].first + A[i].first);
    }
    cout << sum << "\n";

    return 0;
}