class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        int count=0;
        int val=arr.size()/k;
        for(auto x:freq){
            if(x.second>val){
                count++;
            }
        }
        return count;
    }
};