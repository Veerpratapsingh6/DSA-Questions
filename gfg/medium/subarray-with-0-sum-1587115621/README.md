# Zero Sum Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers,  **arr[]**. Find if there is a subarray (of size at least one) with  **0** sum. Return true/false depending upon whether there is a subarray present with 0-sum or not. 

 **Examples:** 

```
Input: arr[] = [4, 2, -3, 1, 6]
Output: true
Explanation: 2, -3, 1 is the subarray with a sum of 0.
```

```
Input: arr = [4, 2, 0, 1, 6]
Output: true
Explanation: 0 is one of the elements in the array so there exist a subarray with sum 0.
```

```
Input: arr = [1, 2, -1]
Output: false
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T08:27:33.955Z  

```cpp
class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        // code here
        int sum=0;
        unordered_set<int>st;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum==0||st.find(sum)!=st.end()){
                return true;
            }
            st.insert(sum);
        }
        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1)