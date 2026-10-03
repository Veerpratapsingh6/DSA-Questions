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
**Runtime:** 1 ms (beats 54.48%)  
**Memory:** 10.3 MB (beats 89.15%)  
**Submitted:** 2026-10-03T07:40:51.914Z  

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0;
        int right=0;
        int max_len=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                left++;
            }
            else{
                right++;
            }

            if(left==right){
                max_len=max(max_len,2*right);
            }
            else if(right>left){
                left=right=0;
            }
        }

        left=right=0;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='('){
                left++;
            }
            else{
                right++;
            }

            if(left==right){
                max_len=max(max_len,2*left);
            }
            else if(left>right){
                left=right=0;
            }
        }
        return max_len;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-valid-parentheses/)