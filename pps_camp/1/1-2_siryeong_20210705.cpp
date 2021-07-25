#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> m;
    for(int i = 0; i < skill.length(); i++)
        m.insert(pair<char, int>(skill[i], i));
    for(string s:skill_trees){
        int t = -1;
        answer++;
        for(char c:s){
            if(m.find(c)!=m.end()){
                if(m[c] == t+1) t++;
                else {answer--; break;}
            }
        }
    }
    
    return answer;
}