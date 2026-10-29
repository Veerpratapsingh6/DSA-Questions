class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int left=0;
        int right=arr.size()-1;
        int left_max=arr[left];
        int right_max=arr[right];
        int ans=0;
        while(left<right){
            if(left_max<right_max){
                left++;
                left_max=max(left_max,arr[left]);
                ans+=left_max-arr[left];
            }
            else{
                right--;
                right_max=max(right_max,arr[right]);
                ans+=right_max-arr[right];
            }
        }
        return ans;
    }
};