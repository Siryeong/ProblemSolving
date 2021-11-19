#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _applicant{
    int review;
    int test;
} applicant;

int group[8001][8001] = {{0,},};
bool checked[8001] = {0,};

void party(int p, int n){
    if(checked[p]) return;
    checked[p] = true;
    for(int i = 0; i < n; i++){
        if(group[p][i])
            party(i, n);
    }
}

int main()
{
    int n;
    cin >> n;

    applicant p[8001];
    for(int i = 0; i < n; i++)
        cin >> p[i].review >> p[i].test;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((p[i].review > p[j].review && p[i].test < p[j].test) || 
               (p[i].review < p[j].review && p[i].test > p[j].test)){
                   group[i][j] = 1;
                   group[j][i] = 1;
               }
        }
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        if(!checked[i]){
            party(i, n);
            result ++;
        }
    }

    cout << result << "\n";

    return 0;
}