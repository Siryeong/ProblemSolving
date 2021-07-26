#include <string>
#include <vector>

using namespace std;


// sum k=0 to 2k <= n : (n-k)! / ((n-2k)! * k!) 
// ㅋㅋㅋ 이거 개신기함 규칙이 피보나치임
long long solution(int n) {
    long long fact[2001] = {1,1};
    for(int i = 2; i <= n; i++){
        fact[i] = (fact[i-1] + fact[i-2]) % 1234567;
    }
    return fact[n];
}