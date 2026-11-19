# Minimum Score by Changing Two Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums`.

- The low score of nums is the minimum absolute difference between any two integers.
- The high score of nums is the maximum absolute difference between any two integers.
- The score of nums is the sum of the high and low scores.

Return the  **minimum score**  after  **changing two elements**  of `nums`.

 

Original
C++
 **Example 1:** 

 **Input:**  nums = [1,4,7,8,5]

 **Output:**  3

 **Explanation:** 

- Change nums[0] and nums[1] to be 6 so that nums becomes [6,6,7,8,5].
- The low score is the minimum absolute difference: |6 - 6| = 0.
- The high score is the maximum absolute difference: |8 - 5| = 3.
- The sum of high and low score is 3.

 **Example 2:** 

 **Input:**  nums = [1,4,3]

 **Output:**  0

 **Explanation:** 

- Change nums[1] and nums[2] to 1 so that nums becomes [1,1,1].
- The sum of maximum absolute difference and minimum absolute difference is 0.

 

 **Constraints:** 

- 3 <= nums.length <= 105
- 1 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 38 MB (beats 16.06%)  
**Submitted:** 2026-11-19T17:32:09.938Z  

```cpp
class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int first_min=INT_MAX;
        int second_min=INT_MAX;
        int third_min=INT_MAX;

        int first_max=INT_MIN;
        int second_max=INT_MIN;
        int third_max=INT_MIN;

        for(int i=0; i<nums.size();i++){
            if(first_max<=nums[i]){
                third_max=second_max;
                second_max=first_max;
                first_max=nums[i];
            }
            else if (nums[i] >= second_max) {
                third_max = second_max;
                second_max = nums[i];
            }
            else if (nums[i] > third_max) {
                third_max = nums[i];
            }

            if(first_min>=nums[i]){
                third_min=second_min;
                second_min=first_min;
                first_min=nums[i];
            }
            else if (nums[i] <= second_min) {
                third_min = second_min;
                second_min = nums[i];
            }
            else if (nums[i] < third_min) {
                third_min = nums[i];
            }
        }
        int ans=min((first_max-third_min),min((third_max-first_min),(second_max-second_min)));
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-score-by-changing-two-elements/)