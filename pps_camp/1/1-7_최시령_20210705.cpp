#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    // init
    int M,N;
    cin >> M >> N;
    vector<string> v;
    int a[5] = {0,0,0,0,0};
    map<int, int> m;
    for(int i = 0; i < 5; i++)
        m.insert(pair<int, int>(i*4, i));
    for(int i = 0; i < 5*M+1; i++){
        string t;
        cin >> t;
        v.push_back(t);
    }

    //solve
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            int t = 0;
            for(int x = i*5+1; x < i*5+5; x++){
                for(int y = j*5+1; y < j*5+5; y++) 
                    if(v[x][y]=='*') t++;
            }
            a[m[t]]++;
        }
    }

    for(int i:a){
        cout << i << " ";
    } cout << "\n";

    return 0;
}