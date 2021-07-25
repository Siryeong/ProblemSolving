#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string week[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int mon[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d=0;
    for(int i = 0; i < a-1; i++)
        d+=mon[i];
    d+=b;
    answer = week[(5+d-1)%7];
        
    
    return answer;
}