#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c:s){
        if(c < 'D') cout << char(c+23);
        else cout << (char)(c-3);
    }
    return 0;
}