# Longest Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given a string containing just the characters `'('` and `')'`, return  *the length of the longest valid (well-formed) parentheses **substring*.

 

 **Example 1:** 

```
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".

```

 **Example 2:** 

```
Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".

```

 **Example 3:** 

```
Input: s = ""
Output: 0

```

 

 **Constraints:** 

- 0 <= s.length <= 3 * 104
- s[i] is '(', or ')'.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-10-03T07:16:28.062Z  

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        int max_len=0;
        stack<int>st;
        st.push(-1);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();

                if(st.empty()){
                    st.push(i);
                }
                else{
                    max_len=max(max_len,i-st.top());
                }
            }
        }
        return max_len;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-valid-parentheses/)