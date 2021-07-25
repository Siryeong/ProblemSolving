#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str, char del){
    vector<string> re;
    stringstream ss(str);
    string temp;
    while (getline(ss, temp, del))
        re.push_back(temp);
    return re;
}

int main()
{
    string s;
    getline(cin, s);
    int T = stoi(s);
    cout << fixed;
    cout.precision(2);
    while(T--){
        getline(cin, s);
        vector<string> line = split(s, ' ');
        float f = stof(line[0]);
        // @ == *3 / % == +5 / # == -7
        for(int i = 1; i < line.size(); i++){
            if(line[i]=="@") f *=3;
            else if(line[i]=="%") f +=5;
            else if(line[i]=="#") f -= 7;
        }
        cout << f << "\n";
    }
    return 0;
}