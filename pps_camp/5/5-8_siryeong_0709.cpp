#include <string>
#include <vector>
#include <iostream>

using namespace std;

int number(int a){
    int re = 0;
    for(int i = 1; i <= a; i++)
        if(a%i==0) re++;
    return re;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++){
        if(number(i)%2==0) answer+=i;
        else answer-=i;
    }
    return answer;
}