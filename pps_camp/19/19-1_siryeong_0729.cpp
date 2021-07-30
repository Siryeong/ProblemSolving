class Solution {
public:
    int re = 0;
    
    void dfs(vector<int> nums, int i, int cum){
        if(i >= nums.size()-1){
            re += cum;
            return;
        }
        dfs(nums, i+1, cum);
        dfs(nums, i+1, cum ^ nums[i+1]);
    }
    
    int subsetXORSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            dfs(nums, i, nums[i]);
        
        return re;
    }
};