class Solution {
public:

    bool is_decreasing(vector<int>nums){
        if (nums.empty()){
            return true;
        }
        int drop_count=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                drop_count++;
            }
        }

        if(nums[nums.size()-1]<nums[0]){
            drop_count++;
        }
        
        if(drop_count<=1){
            return true;
        }
        return false;
    }

    bool is_increasing(vector<int>nums){
        if (nums.empty()){
            return true;
        }
        int drop_count=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                drop_count++;
            }
        }

        if(nums[nums.size()-1]>nums[0]){
            drop_count++;
        }

        if(drop_count<=1){
            return true;
        }
        return false;
    }

    int minOperations(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        if(is_sorted(nums.begin(),nums.end())){
            return 0;
        }

        if (is_increasing(nums) || is_decreasing(nums)) {
            return nums.size() - 1;
        }

        return -1;
    }
};