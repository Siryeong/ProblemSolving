#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
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
    for(int i = ans.length()-1; i >= 0; i--)
        cout << ans[i];
    cout << "\n";
}