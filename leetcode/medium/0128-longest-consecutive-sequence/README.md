# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 97 ms (beats 15.76%)  
**Memory:** 88.7 MB (beats 78.45%)  
**Submitted:** 2026-10-19T07:29:36.251Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>store(nums.begin(),nums.end());
        int ans=0;
        for(auto x:store){
            if(store.find(x-1)==store.end()){
                int curr=x;
                int cnt=1;

                while(store.find(curr+1)!=store.end()){
                    curr++;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)