class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        if(b.size()>a.size()){
            return false;
        }
        unordered_map<int,int>st;
        for(int x:a){
            st[x]++;
        }
        for(int i=0; i<b.size(); i++){
            if(st[b[i]]==0){
                return false;
            }
            st[b[i]]--;
        }
        return true;
    }
};