class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int re = 0, t = nums.size()-1;
        sort(nums.begin(), nums.end());
        
        for(int i = t; i >= 2; i--){
            if(nums[i] < nums[i-1] + nums[i-2]) {
                re = nums[i] + nums[i-1] + nums[i-2];
                break;
            }
        }
        
        return re;
    }
};