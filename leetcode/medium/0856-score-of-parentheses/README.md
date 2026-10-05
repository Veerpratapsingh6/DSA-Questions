# Score of Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a balanced parentheses string `s`, return  *the  **score**  of the string*.

The  **score**  of a balanced parentheses string is based on the following rule:

- "()" has score 1.
- AB has score A + B, where A and B are balanced parentheses strings.
- (A) has score 2 * A, where A is a balanced parentheses string.

 

 **Example 1:** 

```
Input: s = "()"
Output: 1

```

 **Example 2:** 

```
Input: s = "(())"
Output: 2

```

 **Example 3:** 

```
Input: s = "()()"
Output: 2

```

 

 **Constraints:** 

- 2 <= s.length <= 50
- s consists of only '(' and ')'.
- s is a balanced parentheses string.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.8 MB  
**Submitted:** 2026-10-05T08:25:35.268Z  

```cpp
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.top()=='('){
                    count++;
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/score-of-parentheses/)