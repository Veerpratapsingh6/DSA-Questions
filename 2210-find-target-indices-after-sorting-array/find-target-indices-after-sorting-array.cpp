class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>lst;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                lst.push_back(i);
            }
        }
        return lst;
    }
};