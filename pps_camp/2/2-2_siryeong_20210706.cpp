#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        int c = 0;
        int sum = 0;
        for(char ch:s){
            if(ch=='O') c++;
            else c = 0;
            sum += c;
        }
        cout << sum << "\n";
    }

    return 0;
}