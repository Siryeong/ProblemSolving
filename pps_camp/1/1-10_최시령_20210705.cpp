#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<char, int> m;
    while(N--){
        string tmp;
        cin >> tmp;
        if(m.find(tmp[0]) == m.end())
            m[tmp[0]] = 1;
        else
            m[tmp[0]]++;
    }

    string s = "";
    for (auto iter:m)
        if(iter.second >= 5) s += iter.first;
    if(s != "")
        cout << s << "\n";
    else  
        cout << "PREDAJA\n";

    return 0;
}