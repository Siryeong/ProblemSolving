#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<char> cs(number.begin(), number.end());

    while(k > 0 && !cs.empty()){
        int maxi = 0;
        for(int i = 0; i < k+1; i++){
            if((cs[maxi]-'0') < (cs[i]-'0')) maxi = i;
        }
        answer += cs[maxi];
        cs.erase(cs.begin());
        if(k > maxi){
            cs.erase(cs.begin(), cs.begin()+maxi); k-=maxi;
        }
        else{
            cs.erase(cs.begin(), cs.begin()+k); k=0;
        }
        if(answer.length() >= number.length()-k) break;
    } 
    string s(cs.begin(), cs.end());
    if(k==0)
        answer += s;

    return answer;
}