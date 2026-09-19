class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>store(a.begin(),a.end());
        store.insert(b.begin(),b.end());
        vector<int>ans(store.begin(),store.end());
        return ans;
    }
};