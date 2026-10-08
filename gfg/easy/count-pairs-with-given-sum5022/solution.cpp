class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        
        while (i<j){
            int sum=arr[i]+arr[j];
            if(sum==0){
                ans.push_back({arr[i],arr[j]});
                
                int left_val=arr[i];
                while(i<j&&arr[i]==left_val){
                    i++;
                }
                
                int right_val=arr[j];
                while(i<j&&arr[i]==right_val){
                    j--;
                }
            }
            else if(sum>0){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};