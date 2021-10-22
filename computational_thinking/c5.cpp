#include <iostream>
#include <cmath>

#define MAXLEN 10

using namespace std;

typedef struct _polymino{
    int h;
    int w;
    int shape[5][5];
} polymino;

bool check(int len, int square[MAXLEN][MAXLEN]){
    for(int h = 0; h < len; h++){
        for(int w = 0; w < len; w++){
            if(square[h][w] == 0) return false;
        }
    }
    return true;
}

void cpy(int len, int src[MAXLEN][MAXLEN], int dest[MAXLEN][MAXLEN]){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++)
            dest[i][j] = src[i][j];
    }
}

bool solution(int n, polymino blocks[], int len, int k, int square[MAXLEN][MAXLEN]){
    if(n == k)
        return check(len, square);

    for(int x = 0; x <= len - blocks[k].w; x++){
        for(int y = 0; y <= len - blocks[k].h; y++){

            int tmp[MAXLEN][MAXLEN];
            cpy(len, square, tmp);
            for(int h = 0; h < blocks[k].h; h++){
                for(int w = 0; w < blocks[k].w; w++){
                    if(blocks[k].shape[h][w]) tmp[ y+h ][ x+w ] = blocks[k].shape[h][w]*(k+1);
                }
            }
            bool result = solution(n, blocks, len, k+1, tmp);
            if(result){
                cpy(len, tmp, square);
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    polymino blocks[n];
    int s = 0;
    for(int i = 0; i < n; i++){
        cin >> blocks[i].h >> blocks[i].w;
        for(int h = 0; h < blocks[i].h; h++){
            for(int w = 0; w < blocks[i].w; w++){
                cin >> blocks[i].shape[h][w];
                if(blocks[i].shape[h][w]) s++;
            }
        }
    }
    int len = sqrt(s);
    if(len*len != s){
        cout << "No solution possible\n";
        return 0;
    }

    int square[MAXLEN][MAXLEN] = {0,};
    bool re = false;
    re = solution(n, blocks, len, 0, square);

    if(!re) {
        cout << "No solution possible\n";
        return 0;
    }

    for(int h = 0; h < len; h++){
        for(int w = 0; w < len; w++)
            cout << square[h][w] << " ";
        cout << "\n";
    }
    return 0;
}