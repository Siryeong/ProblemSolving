map<int, int> m;

bool comp(int a, int b){
    if(m.find(a) != m.end() && m.find(b) != m.end()) return m[a] < m[b]; // 둘다 포함
    else if(m.find(a) != m.end()) return true; // a 만
    else if(m.find(b) != m.end()) return false; // b 만
    else return a < b; // 둘다 미포함
}

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        m.clear();
        for(int i = 0; i < arr2.size(); i++)
            m[arr2[i]] = i;
        sort(arr1.begin(), arr1.end(), comp);
        
        return arr1;
        
    }
};