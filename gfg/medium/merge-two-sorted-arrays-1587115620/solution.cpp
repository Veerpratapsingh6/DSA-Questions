class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=b.size();
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        while(n!=0){
            int num=a.back();
            a.pop_back();
            b[n-1]=num;
            n--;
        }
    }
};