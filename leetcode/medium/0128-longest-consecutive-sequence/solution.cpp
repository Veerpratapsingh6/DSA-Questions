class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>store(nums.begin(),nums.end());
        int ans=0;
        for(auto x:store){
            if(store.find(x-1)==store.end()){
                int curr=x;
                int cnt=1;

                while(store.find(curr+1)!=store.end()){
                    curr++;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};