class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> re;
        set<int> a(nums1.begin(), nums1.end());
        set<int> b(nums2.begin(), nums2.end());
        for(auto i:a){
            if(b.find(i) != b.end()) re.push_back(i);
        }
        return re;
    }
};