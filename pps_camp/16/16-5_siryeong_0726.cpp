class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> re;
        unordered_map<int, int> um;
        for(int i = 0; i < nums.size(); i++)
            um[target-nums[i]] = i;

        for(int i = 0; i < nums.size(); i++){
            if(um.find(nums[i]) != um.end()){
                if(um[nums[i]] == i) continue;
                re.push_back(um[nums[i]] > i ? i : um[nums[i]]);
                re.push_back(um[nums[i]] < i ? i : um[nums[i]]);
                break;
            }
        }
        
        return re;
    }
};