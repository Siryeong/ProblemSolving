#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<char> v;
    for(int i = 0; i < 8; i++){
        char c;
        cin >> c;
        v.push_back(c);
    }
    string s(v.begin(), v.end());
    if(s=="12345678") cout << "ascending\n";
    else if(s=="87654321") cout << "descending\n";
    else cout << "mixed\n";

    return 0;
}