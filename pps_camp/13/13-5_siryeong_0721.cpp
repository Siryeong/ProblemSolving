#include <bits/stdc++.h>
using namespace std;

#define MIN(a, b) ((a) > (b) ? (b) : (a))


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    int A[n];
    int B[n];

    if(s[0]=='A'){
        A[0] = 0;
        B[0] = 1;
    }
    else{
        A[0] = 1;
        B[0] = 0;
    }

    for(int i = 1; i < n; i++){
        if(s[i]=='A'){
            A[i] = MIN(A[i-1], B[i-1]+1); // 다 a를 만들거나, 다 b를 만들어서 한번 뒤집거나
            B[i] = MIN(A[i-1]+1, B[i-1]+1); // a를 만든거에서 한번 뒤집거나, 지금꺼 하나만 뒤집거나
        }
        else{
            B[i] = MIN(B[i-1], A[i-1]+1); // 다 b vs 다 A에서 한번 뒤집거나
            A[i] = MIN(B[i-1]+1, A[i-1]+1); // b에서 뒤집기 vs 지금꺼 하나만 뒤집기
        }
    }

    cout << MIN(A[n-1], B[n-1]+1) << "\n";


    return 0;
}