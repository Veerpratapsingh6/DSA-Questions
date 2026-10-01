class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int ans=arr[arr.size()-1]-arr[0];
        for(int i=0; i<arr.size()-1; i++){
            int minH=min(arr[0]+k,arr[i+1]-k);
            int maxH=max(arr[i]+k,arr[arr.size()-1]-k);
            
            if(minH<0){
                continue;
            }
            
            ans=min(ans,maxH-minH);
        }
        return ans;
    }
};