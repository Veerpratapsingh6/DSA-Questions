class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        int count=1;
        int ans=1;
        sort(arr.begin(),arr.end());
        for(int i=1; i<arr.size(); i++){
            if(arr[i]-arr[i-1]==1){
                count++;
                ans=max(ans,count);
            }
            
            else if(arr[i]==arr[i-1]){
                continue;
            }
            
            else{
                count=1;
            }
        }
        return ans;
    }
};