class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int re = -1000000;
        int tmp = 0;
        for(auto i:nums){
            tmp += i;
            if(re < tmp){
                // 지금까지 더한게 기존보다 크면
                re = tmp;
            }
            if(tmp < 0){
                // 지금까지 더한게 음수일경우 초기화
                tmp = 0;
            }
        }
        
        return re;
    }
};