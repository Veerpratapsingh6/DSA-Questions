class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int curr_sum=arr[0];
        int max_sum=arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>curr_sum+arr[i]){
                curr_sum=arr[i];
            }
            else{
                curr_sum+=arr[i];
            }
            
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
    }
};