class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int count=0;
        int max_jump=0;
        int curr_pos=0;
        
        for(int i=0; i<arr.size(); i++){
            if(i>max_jump){
                return -1;
            }
            max_jump=max(max_jump,i+arr[i]);
            if(i==curr_pos){
                count++;
                curr_pos=max_jump;
                
                if(curr_pos>=arr.size()-1){
                    break;
                }
            }
        }
        if(curr_pos<arr.size()-1){
            return -1;
        }
        return count;
    }
};
