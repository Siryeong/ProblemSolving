class NumArray {
private:
    vector<int> nums;

public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        int re = 0;
        for(int i = left; i <= right; i++) re+=nums[i];
        return re;
    }
};