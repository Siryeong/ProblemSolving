#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[50]={0,};
    char c[50]={0,};
    string s;
    cin >> s;
    stringstream ss(s);
    ss >> v[0];
    int i = 1;

    while(ss >> c[i]){
        ss >> v[i++];
        if(c[i-1]=='-' || v[i-2] < 0) v[i-1] = -v[i-1];
    }

    int re = 0;
    for(int k = 0; k < i; k++)
        re += v[k];
    cout << re << "\n";

    return 0;
}