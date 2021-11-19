#include <iostream>
using namespace std;

int head[10001] = {0,};
int disjoint[10001] = {0,};

int main()
{
    ios::sync_with_stdio(0x0); cin.tie(0x0);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(head[a] == 0 && head[b] == 0){
            head[a] = a;
            disjoint[a] = b;
            head[b] = b;
            disjoint[b] = a;
        }
        else if(head[b] == 0 && head[a] != 0){
            head[b] = disjoint[a];
            disjoint[b] = head[a];
        }
        else if(head[a] == 0 && head[b] != 0){
            head[a] = disjoint[b];
            disjoint[a] = head[b];
        }
        else{
            if(head[a] == head[b]){
                cout << i+1 << "\n";
                break;
            }
            if(head[a] != disjoint[b]){
                int head_b = head[b];
                int disj_b = disjoint[b];
                for(int i = 1; i <= n; i++){
                    if(head[i] == head_b){
                        head[i] = disjoint[a];
                        disjoint[i] = head[a];
                    }
                }
                for(int i = 1; i <= n; i++){
                    if(head[i] == disj_b){
                        head[i] = head[a];
                        disjoint[i] = disjoint[a];
                    }
                }
            }
        }
    }
    
    return 0;
}