class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxi=arr[0];
        int mini=arr[0];
        int ans=arr[0];
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i]<0){
                swap(maxi,mini);
            }
            maxi=max(arr[i],maxi*arr[i]);
            mini=min(arr[i],mini*arr[i]);
            
            ans=max(ans,maxi);
        }
        return ans;
    }
};