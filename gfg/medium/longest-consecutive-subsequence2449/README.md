# Longest Consecutive Subsequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  of non-negative integers. Find length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

 **Examples:** 

```
Input: arr[] = [2, 6, 1, 9, 4, 5, 3]
Output: 6
Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.
```

```
Input: arr[] = [1, 9, 3, 10, 4, 20, 2]
Output: 4
Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.
```

```
Input: arr[] = [15, 13, 12, 14, 11, 10, 9]
Output: 7
Explanation: The longest consecutive subsequence is 9, 10, 11, 12, 13, 14, 15, which has a length of 7.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T07:22:35.602Z  

```cpp
class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        int count=1;
        int ans=1;
        sort(arr.begin(),arr.end());
        for(int i=1; i<arr.size(); i++){
            if(arr[i]-arr[i-1]==1){
                count++;
                ans=max(ans,count);
            }
            
            else if(arr[i]==arr[i-1]){
                continue;
            }
            
            else{
                count=1;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1)