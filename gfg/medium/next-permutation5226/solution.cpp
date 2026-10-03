class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int mark=-1;
        for(int i=arr.size()-1; i>0; i--){
            if(arr[i]>arr[i-1]){
                mark=i-1;
                break;
            }
        }
        
        if(mark!=-1){
            for(int i=arr.size()-1; i>mark; i--){
                if(arr[i]>arr[mark]){
                    swap(arr[i],arr[mark]);
                    break;
                }
            }
        }
        
        reverse(arr.begin()+(mark+1),arr.end());
    }
};