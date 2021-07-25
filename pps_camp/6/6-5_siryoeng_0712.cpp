#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int> m;
    cin >> n;
    while(n--){
        int tmp;
        cin >> tmp;
        m.insert(tmp);
    }
    for(auto i:m)
        cout << i << " ";

    return 0;
}