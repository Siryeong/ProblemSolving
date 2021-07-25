#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[10] = {"zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight", "nine"};
    int m, n;
    cin >> m >> n;

    map<string, int> mm;
    for(int i = m; i <= n; i++){
        if(i < 10) mm[s[i]] = i;
        else mm[s[i/10] + " " + s[i%10]] = i;
    }
    int i = 0;
    for(auto iter:mm){
        i++;
        cout << iter.second << " ";
        if(i%10==0) cout << "\n";
    }
    
    
    return 0;
}