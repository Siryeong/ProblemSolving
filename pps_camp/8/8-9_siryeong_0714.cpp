#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9];
    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 9; j++){
            if( (sum - arr[i] - arr[j]) == 100 ){
                arr[i]=-1;
                arr[j]=-1;
                break;
            }
        }
    }
    for(int i:arr){
        if(i!=-1) cout << i << "\n";
    }
    
    return 0;
}