# Minimum Operations to Sort a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s` consisting of lowercase English letters.

In one operation, you can select any  **substring**  of `s` that is  **not**  the entire string and  **sort**  it in  **non-descending alphabetical**  order.

Return the  **minimum**  number of operations required to make `s` sorted in  **non-descending**  order. If it is not possible, return -1.

 

 **Example 1:** 

 **Input:**  s = "dog"

 **Output:**  1

 **Explanation:** ​​​​​​​

- Sort substring "og" to "go".
- Now, s = "dgo", which is sorted in ascending order. Thus, the answer is 1.

 **Example 2:** 

 **Input:**  s = "card"

 **Output:**  2

 **Explanation:** 

- Sort substring "car" to "acr", so s = "acrd".
- Sort substring "rd" to "dr", making s = "acdr", which is sorted in ascending order. Thus, the answer is 2.

 **Example 3:** 

 **Input:**  s = "gf"

 **Output:**  -1

 **Explanation:** 

- It is impossible to sort s under the given constraints. Thus, the answer is -1.

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 18 ms (beats 54.09%)  
**Memory:** 27.5 MB (beats 79.55%)  
**Submitted:** 2026-10-22T07:42:41.933Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-operations-to-sort-a-string/)