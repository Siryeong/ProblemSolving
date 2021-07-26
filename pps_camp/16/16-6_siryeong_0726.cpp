class Solution {
public:
    bool isHappy(int n) {
        unordered_map<string, int> um;
        int t = n;
        while(true){
            string s = to_string(t);
            if(um.find(s) != um.end()) return false;
            t = 0;
            for(int i = 0; i < s.length(); i++)
                t += (s[i] - '0')*(s[i] - '0');
            if(t==1) return true;
            um[s] = t;
        }
    }
};