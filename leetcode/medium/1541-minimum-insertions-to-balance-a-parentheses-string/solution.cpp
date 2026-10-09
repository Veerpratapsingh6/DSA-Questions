class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int i=0; 
        int ans=0;

        while(i<s.size()){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(i+1<s.size()&&s[i+1]==')'){
                    i++;
                }
                else{
                    ans++;
                }

                if(st.empty()){
                ans++;
            }
            else{
                st.pop();
                }
            }
            i++;
        }
        ans+=st.size()*2;
        return ans;
    }
};