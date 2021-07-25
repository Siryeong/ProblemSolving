#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int n;
    bool m;
    cin >> n;
    cin >> m;
    if(n < 6){
        n--;
        while(n--){
            m = !m;
            cout << m << "\n";
        }
    }
    else cout << "Love is open door\n";
    return 0;
}