#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string mo = "aeiou";
    string za = "bcdfghjklmnpqrstvwxyz";
    set<char> MO(mo.begin(), mo.end());
    set<char> ZA(za.begin(), za.end());

    while(true) {
        string s;
        cin >> s;
        if(s == "end") break;

        bool a=false, b=true, c=true;
        for(int i = 0; i < s.length(); i++){
            if(MO.find(s[i]) != MO.end()) a = true;
            if(i+1 < s.length()){
                if((s[i] == s[i+1]) && (s[i] != 'e') && (s[i] != 'o')){
                    c = false;
                    break;
                }
            }
            if(i+2 < s.length()){
                if((MO.find(s[i]) == MO.end() && MO.find(s[i+1]) == MO.end() && MO.find(s[i+2]) == MO.end()) ||
                (ZA.find(s[i]) == ZA.end() && ZA.find(s[i+1]) == ZA.end() && ZA.find(s[i+2]) == ZA.end())){
                    b = false;
                    break;
                }
            }
        }
        if( a && b && c)
            cout << "<" << s << ">" << " is acceptable.\n";
        else
            cout << "<" << s << ">" << " is not acceptable.\n";

    }

    return 0;
}