class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> re(nums.size());
        int even=0;
        int odd=1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2==0) {
                re[even] = nums[i];
                even+=2;
            }
            else{
                re[odd] = nums[i];
                odd+=2;
            }
        }
        return re;
    }
};