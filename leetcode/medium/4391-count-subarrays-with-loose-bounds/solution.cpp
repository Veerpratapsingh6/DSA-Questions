class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int i=0;
        int j=0;
        long long count=0;
        bool is_break=false;
        while(j<nums.size()){
            if(nums[j]>=minK && nums[j]<=maxK){
                count+=(j-i+1);
                j++;
            }
            else{
                j++;
                i=j;
                is_break=true;
            }
        }
        return count;
    }
};