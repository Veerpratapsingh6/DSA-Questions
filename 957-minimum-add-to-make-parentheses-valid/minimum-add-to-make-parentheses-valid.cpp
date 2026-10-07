class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count_open=0;
        int count_close=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                count_open++;
                st.push(s[i]);
            }
            else{
                if(count_open>0&&st.top()=='('){
                    count_open--;
                    st.pop();
                }
                else{
                    count_close++;
                    st.push(s[i]);
                }
            }
        }
        if(st.empty()){
            return abs(count_open-count_close);
        }
        return st.size();
    }
};