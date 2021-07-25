#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[42] = {0,};
    for(int i = 0; i < 10; i++){
        int N;
        cin >> N;
        arr[N%42] = 1;
    }
    int c = 0;
    for(int i = 0; i < 42; i++)
        if(arr[i]) c++;
    cout << c << "\n";
    return 0;
}