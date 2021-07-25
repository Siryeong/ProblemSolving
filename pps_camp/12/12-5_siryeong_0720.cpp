class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        for(int i = 0; i < nums1.size(); i++){
            int t =-1, c=1111;
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j]==nums1[i]) c=j;
                if(j > c && nums2[j] > nums1[i]){
                    t = nums2[j];
                    break;
                }
            }
            v.push_back(t);
        }
        
        return v;
    }
};