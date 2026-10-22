class Solution {
public:
    int minOperations(string s) {
        if(is_sorted(s.begin(),s.end())){
            return 0;
        }
        if(s.size()==2){
            return -1;
        }
        int mini=*min_element(s.begin(),s.end());
        int maxi=*max_element(s.begin(),s.end());

        if(mini==s.front()||maxi==s.back()){
            return 1;
        }

        bool ismax_mid=false;
        bool ismin_mid=false;

        for(int i=1; i<s.size()-1; i++){
            if(s[i]==mini){
                ismin_mid=true;
            }
            if(s[i]==maxi){
                ismax_mid=true;
            }
        }
        if(ismax_mid || ismin_mid){
            return 2;
        }

        return 3;
    }
};