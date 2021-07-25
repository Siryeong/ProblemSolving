#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K = 14, N;
    string s[] = {"sukhwan", "baby", "sukhwan", "tururu", "turu", 
                "very", "cute", "tururu", "turu",
                "in", "bed", "tururu", "turu",
                "baby"};
    cin >> N;

    if(s[N%K] == "tururu" || s[N%K] == "turu"){
        for(int i = 0; i < N/K; i++)
            s[N%K] += "ru";
        int l = s[N%K].length();
        if(l >= 12) cout << "tu+ru*" << l/2 - 1 << "\n";
        else cout << s[N%K] << "\n";
    }
    else cout << s[N%K] << "\n";
    
    return 0;
}