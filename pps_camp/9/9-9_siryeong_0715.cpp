#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int sum=1;
    long long int n;
    cin >> n;
    int i = 1;
    while(true){
        if(sum >= n) break;
        sum += 6*i++;
    }
    cout << i << "\n";

    return 0;
}