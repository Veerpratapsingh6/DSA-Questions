class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int>ans;
        unordered_map<int,int>store;

        for(auto x:arr){
            store[x]++;
            
            if(store[x]==2){
                ans.push_back(x);
            }
        }
        return ans;
    }
};