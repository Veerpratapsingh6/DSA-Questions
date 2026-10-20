class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        unordered_set<int>st;
        for(int i=0; i<arr.size(); i++){
            st.insert(arr[i]);
        }
        int ans=0;
        for(auto x:st){
            if(st.find(x-1)==st.end()){
                int curr=x;
                int count=1;
                
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    count++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};