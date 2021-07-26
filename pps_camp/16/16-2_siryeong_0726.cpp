class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int * tmp = new int[nums.size()];
        vector<int> re;
        for(int i = 0; i < nums.size(); i++)
            tmp[i] = 0;
        for(int i = 0; i < nums.size(); i++)
            tmp[nums[i]-1] = 1;
        for(int i = 0; i < nums.size(); i++)
            if(tmp[i]==0) re.push_back(i+1);
        
        return re;
    }
};