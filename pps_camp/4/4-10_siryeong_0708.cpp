#include <bits/stdc++.h>
using namespace std;

string bigAB(string a, string b){
    string ans = "";
    int t=0;
    int i = a.length()-1, j = b.length()-1;
    while(i >= 0 || j >= 0){
        int A=0, B=0;
        if(i >= 0 && j >=0)
        {   A = a[i]-'0'; B = b[j]-'0'; }
        else if (i >= 0)
        {   A = a[i]-'0'; }
        else if (j >= 0)
        {   B = b[j]-'0'; }
        ans += (char)((A+B+t)%10 + '0');
        t = (A+B+t)/10;
        i--; j--;
    }
    if(t != 0) ans += (char)(t+'0');
    reverse(ans.begin(), ans.end());
    return ans;
}

bool bigger(string a, string b){
    if(a.length() > b.length()) return true;
    if(a.length() < b.length()) return false;
    if(a==b) return true;
    return a > b;
}

int main()
{
    string * s = new string[500];
    s[1] = "1";
    s[2] = "2";
    
    for(int i = 3; i < 500; i++)
        s[i] = bigAB(s[i-1], s[i-2]);

    while(true){
        string s1, s2;
        cin >> s1 >> s2;
        if(s1=="0" && s2=="0") break;
        int c = 0;
        for(int i = 1; i < 500; i++){
            if(bigger(s[i], s1) && bigger(s2, s[i])) c++;
            if(bigger(s[i], s2)) break;
        }
        cout << c << "\n";
    }

    return 0;
}