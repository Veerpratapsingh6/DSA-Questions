class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        // Code here
        sort(arr.begin(),arr.end());
        
        for(auto inn_arr:arr){
            if(ans.empty()){
                ans.push_back(inn_arr);
            }
            else if(ans.back()[1]>=inn_arr[0]){
                ans.back()[1]=max(ans.back()[1],inn_arr[1]);
            }
            else{
                ans.push_back(inn_arr);
            }
        }
        return ans;
    }
};