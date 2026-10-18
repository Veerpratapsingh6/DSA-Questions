class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>store;
        store.push_back(1);
        for(int i=2; i<=n; i++){
            int carry=0;
            for(int j=0; j<store.size(); j++){
                int temp=store[j]*i+carry;
                store[j]=temp%10;
                carry=temp/10;
            }
            while(carry){
                store.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(store.begin(),store.end());
        return store;
    }
};