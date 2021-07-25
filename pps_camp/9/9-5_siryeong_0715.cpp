#include <bits/stdc++.h>
using namespace std;


bool m[100][100];

void dfs(vector<string> str, int i, int j, int N)
{

    if(i > 0 && !m[i-1][j] && str[i][j] == str[i-1][j]){ // 상
        m[i-1][j] = true;
        dfs(str, i-1, j, N);
    }
    if(i < N-1 && !m[i+1][j] && str[i][j] == str[i+1][j]){ // 하
        m[i+1][j] = true;
        dfs(str, i+1, j, N);
    }
    if( j > 0 && !m[i][j-1] && str[i][j] == str[i][j-1]){ // 좌
        m[i][j-1] = true;
        dfs(str, i, j-1, N);
    }
    if(j < N-1 && !m[i][j+1] && str[i][j] == str[i][j+1] ){ // 우
        m[i][j+1] = true;
        dfs(str, i, j+1, N);
    }
}

int main()
{
    int N;
    cin >> N;
    vector<string> s(N);
    for(int i = 0; i < N; i++)
        cin >> s[i];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) m[i][j] = false;
        
    }

    int c = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!m[i][j]){ 
                m[i][j] = true;
                dfs(s, i, j, N);
                c++;
            }
        }
    }
    cout << c << " ";
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(s[i][j] == 'R') s[i][j] = 'G';
            m[i][j] = false;
        }
    }

    c = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!m[i][j]){ 
                m[i][j] = true;
                dfs(s, i, j, N);
                c++;
            }
        }
    }
    cout << c << "\n";
    
    return 0;
}