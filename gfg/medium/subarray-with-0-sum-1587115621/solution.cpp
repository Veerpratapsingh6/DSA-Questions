class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        // code here
        int sum=0;
        unordered_set<int>st;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum==0||st.find(sum)!=st.end()){
                return true;
            }
            st.insert(sum);
        }
        return false;
    }
};