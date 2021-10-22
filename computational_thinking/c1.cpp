#include <iostream>
using namespace std;

#define SIZE_Q 2001
#define MAX 2001

/*
 * Queue start
 */
int rear=0;
int front=0;
int queue[SIZE_Q];

bool isEmpty(){ return rear == front; }
bool isFull(){ return (rear + 1)%SIZE_Q == front; }
void q_push(int n){
    if(isFull()) return;
    queue[rear++] = n;
    if(rear == SIZE_Q) rear = 0;
}
int q_pop(){
    if(isEmpty()) return 0;
    int tmp = queue[front++];
    if(front==SIZE_Q) front = 0;
    return tmp;
}
/*
 * Queue end
 */

int main(){
    ios::sync_with_stdio(false); cin.tie(0x0);

    int n, k, f;
    cin >> n >> k >> f;
    int *list[MAX];
    for(int i = 0; i < MAX; i++)
        list[i] = new int[MAX];

    int a, b;
    while(f--){
        cin >> a >> b;
        list[a][++list[a][0]] = b;
        list[b][++list[b][0]] = a;
    }

    for(int i = 1 ; i <= n; i++){
        if(list[i][0] < k){
            q_push(i);
            list[0][i] = 1;
        } 
    }

    while(!isEmpty()){
        int self = q_pop();
        for(int i = 1;  i <= list[self][0]; i++){
            int frnd = list[self][i];
            for(int j = 1; j <= list[frnd][0]; j++){
                if(list[frnd][j] == self){
                    int nfrnd = list[frnd][0];
                    list[frnd][j] = list[frnd][nfrnd];
                    list[frnd][0]--;
                    if(list[frnd][0] < k && list[0][frnd]==0){
                        q_push(frnd);
                        list[0][frnd] = 1;
                    }
                    break;
                }
            }
        }
        list[self][0] = 0;
    }

    int ret = 0;
    for(int i = 1; i <= n; i++){
        if(list[i][0]) ret++;
    }

    cout << ret << "\n";
    

    return 0;
}