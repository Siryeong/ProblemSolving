#include <bits/stdc++.h>
using namespace std;

set<string> s;
int arr[5][5] = {{0,},};

void dfs(int i, int j, int dep, string tmp)
{
    if(dep >= 6){
        s.insert(tmp);
    }
    else{
        tmp += (char)(arr[i][j]+'0');
        if(i > 0){dfs(i-1, j, dep+1, tmp);}
        if(i < 4){dfs(i+1, j, dep+1, tmp);}
        if(j > 0){dfs(i, j-1, dep+1, tmp);}
        if(j < 4){dfs(i, j+1, dep+1, tmp);}
    }
}

int main()
{
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++) cin >> arr[i][j];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            string str = "";
            dfs(i, j, 0, str);
        }
    }
    cout << s.size();
    
    return 0;
}