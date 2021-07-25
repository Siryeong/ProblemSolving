#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    vector<int> m;
    for(int i = 0; i < n; i++) v[i]=i;
    int i = 0;
    while(v.size() > 0){
        i = (i + k-1)%v.size();
        m.push_back(v[i] + 1);
        v.erase(v.begin() + i);
    }

    cout << "<";
    for(i = 0; i < m.size()-1; i++){
        cout << m[i] << ", ";
    }   cout << m[m.size()-1] << ">\n";
    return 0;
}