#include <string>
#include <iostream>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    int ud_[11][11] = {{0,},};
    int rl_[11][11] = {{0,},};
    int x = 5, y = 5;
    for(char c:dirs){
        switch(c){
            case 'U':
                if(y < 10){
                    ud_[x][y] = 1;
                    y++;
                }
                break;
            case 'D':
                if(y > 0){
                    y--;
                    ud_[x][y] = 1;
                }
                break;
            case 'L':
                if(x > 0){
                    x--;
                    rl_[x][y] = 1;
                }
                break;
            case 'R':
                if(x < 10){
                    rl_[x][y] = 1;
                    x++;
                }
                break;
            default:
                break;
        }
    }

    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11; j++){
            if(ud_[i][j]) answer++;
            if(rl_[i][j]) answer++;
        }
    }

    return answer;
}