class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int first_min=INT_MAX;
        int second_min=INT_MAX;
        int third_min=INT_MAX;

        int first_max=INT_MIN;
        int second_max=INT_MIN;
        int third_max=INT_MIN;

        for(int i=0; i<nums.size();i++){
            if(first_max<=nums[i]){
                third_max=second_max;
                second_max=first_max;
                first_max=nums[i];
            }
            else if (nums[i] >= second_max) {
                third_max = second_max;
                second_max = nums[i];
            }
            else if (nums[i] > third_max) {
                third_max = nums[i];
            }

            if(first_min>=nums[i]){
                third_min=second_min;
                second_min=first_min;
                first_min=nums[i];
            }
            else if (nums[i] <= second_min) {
                third_min = second_min;
                second_min = nums[i];
            }
            else if (nums[i] < third_min) {
                third_min = nums[i];
            }
        }
        int ans=min((first_max-third_min),min((third_max-first_min),(second_max-second_min)));
        return ans;
    }
};