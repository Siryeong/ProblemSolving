#include <iostream>

using namespace std;

int gcd(long long a, long long b)
{ // 최대공약수 유클리드 호제법
    while (b > 0)
    {
        long long tmp = a;
        a = b;
        b = tmp%b;
    }
    return a;
}

long long solution(int w,int h) {
    // (5) 10 11 12 13 (10) 15 16 17 18 (15) <-- 규칙
    long long answer = 1;
    long long W = w, H = h;
    answer = W*H;
    long long d = gcd(W, H);

    if(w==h)
        answer -= H;
    else
        answer -= W + H - d; // ( (w/h+1)*h + w%h - 1) * d 전개식
    
    return answer;
}