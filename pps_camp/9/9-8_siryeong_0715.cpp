#include<bits/stdc++.h>
using namespace std;

int gojang[10] = {0,};

bool isgojang(int n){
    string s = to_string(n);
    for(int i = 0; i < s.length(); i++){
        if(gojang[(int)(s[i]-'0')]==1) return true;
    }
    return false;
}

int main()
{
    int N, M;
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        int bt;
        cin >> bt;
        gojang[bt] = 1;
    }

    int a = abs(N-100);
    int b = INT_MAX;
    int c = INT_MAX;
    for(int i = 0; i <= a; i++){
        if((!isgojang(N+i)))
            b = i + (int)to_string(N+i).length();
        if( N >= i && (!isgojang(N-i)))
            c = i + (int)to_string(N-i).length();
        if(b < a || c < a) break;
    }   b = b < c ? b : c;
    
    if(a > b) cout << b << "\n";
    else cout << a << "\n";
    
    return 0;
}