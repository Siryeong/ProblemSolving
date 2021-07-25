#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m[] = {2,2,2, 3,3,3, 4,4,4, 5,5,5, 6,6,6, 7,7,7,7, 8,8,8, 9,9,9,9};
    string s;
    cin >> s;

    int sum = 0;
    for (char c:s)
        sum += (m[c-'A']+1);
    cout << sum << "\n";

    return 0;
}