#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> m;
    m['-']=0;m['1']=1;m['2']=2;m['3']=3;m['4']=4;m['5']=5;
    m['6']=6;m['7']=7;m['8']=8;m['9']=9;m['S']=10;
    string s;
    cin >> s;
    int sum = 0;

    int idx=0, f=1;
    for(; idx < s.length();){
        if(s[idx] !='S') idx+=2;
        else idx++;
        f++;
        if(f==10) break;
    }

    for(int i = 0; i <= s.length()-3; i++){
        if(s[i]=='S'){
            if(s[i+2]=='P') sum += 20;
            else sum += ( m[s[i]] + m[s[i+1]] + m[s[i+2]] );
        }
        else if(s[i]=='P') sum += ( 10 - m[s[i-1]] + m[s[i+1]]);
        else sum += m[s[i]];
    }

    if(idx == s.length()-2) sum += ( m[s[idx]] + m[s[idx+1]] ); // 10번 프레임
    else if(s[idx+1]=='P') sum += ( 10 - m[s[idx]] + m[s[idx+2]] ); // 10번 스페어

    cout << sum << "\n";

    return 0;
}