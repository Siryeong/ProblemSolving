class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> re(n+1, 0);
        for(int i = 0; i <= n; i++){
            int nn = i;
            while(nn > 0){
                re[i] += nn%2;
                nn = nn>>1;
            }
        }
        
        return re;
    }
};