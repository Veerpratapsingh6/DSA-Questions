class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m,string(n,'.'));
        int row_no=1;
        while(row_no<m){
                for(int i=0; i<n-1;i++){
                    ans[row_no][i]='#';
                }
            row_no++;
        }
        return ans;
    }
};