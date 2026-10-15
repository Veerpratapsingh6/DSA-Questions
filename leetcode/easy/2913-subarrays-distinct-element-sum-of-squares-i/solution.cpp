class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            set<int>st;
            for(int j=i; j<n; j++){
                int element=nums[j];
                st.insert(element);
                int count=st.size();
                ans+=count*count;
            }
        }
        return ans;
    }
};