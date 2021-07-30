class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> um;
        um.clear();
        int m=0;
        int t=-1;
        for(int i = 0; i < s.length(); i++){
            if(um.find(s[i]) != um.end() && um[s[i]] > t){ // 있으면 초기화
                t = um[s[i]];
            }
            um[s[i]] = i;
            m = m > i-t ? m : i-t;
        }
        return m;
    }
};