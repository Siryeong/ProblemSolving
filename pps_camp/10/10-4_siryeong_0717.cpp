#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    unsigned long long int tmp = num;
    int answer = -1;
    int i = 0;
    for(i = 0; i < 500; i++){
        if(tmp==1) break;
        if(tmp%2==0) tmp /= 2;
        else tmp = tmp*3 + 1;
    }
    if(i < 500)
        answer = i;
    return answer;
}