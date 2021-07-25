#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    set<int> is;
    
    while(N--){
        int t;
        cin >> t;
        is.insert(t);
    }

    cin >> N;
    while(N--){
        int t;
        cin >> t;
        if(is.find(t) == is.end()) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
    return 0;
}