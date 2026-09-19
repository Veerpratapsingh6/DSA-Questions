class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>store(nums1.begin(),nums1.end());
        set<int>ans;
        for(auto x:nums2){
            if(store.count(x)){
                ans.insert(x);
            }
        }
        vector<int>result(ans.begin(),ans.end());
        return result;
    }
};