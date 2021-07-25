#include <string>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    int answer = 0;
    int len = cookie.size();

    for(int m = 0; m < len; m++){
        int l = m;
        int r = m+1;
        int first = 0, second = 0;
        while(l >= -1 && r <= len){
            if(first > second){
                second += cookie[r++];
            }
            else if(first < second){
                first += cookie[l--];
            }
            else{
                if(answer < first) answer = first;
                second += cookie[r++];
                first += cookie[l--];
            }
        }
        if(first==second && answer < first) answer = first;

    }
    return answer;
}