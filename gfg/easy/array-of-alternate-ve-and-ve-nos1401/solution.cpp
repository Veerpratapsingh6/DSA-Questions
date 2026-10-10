class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>positive_num;
        vector<int>negative_num;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=0){
                positive_num.push_back(arr[i]);
            }
            else{
                negative_num.push_back(arr[i]);
            }
        }
        
        int i=0;
        int j=0;
        int idx=0;
        
        while(i<positive_num.size() && j<negative_num.size()){
            if(i<=j){
                arr[idx]=positive_num[i];
                i++;
            }
            else{
                arr[idx]=negative_num[j];
                j++;
            }
            idx++;
        }
        while(i<positive_num.size()){
            arr[idx]=positive_num[i];
            i++;
            idx++;
        }
        while(j<negative_num.size()){
            arr[idx]=negative_num[j];
            j++;
            idx++;
        }
    }
};