# Kadane's Algorithm

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array  **arr[].**  You need to find the maximum sum of a subarray (containing at least one element) in the array  **arr[]**.

 **Examples:** 

```
Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

```

```
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.
```

```
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T19:44:47.610Z  

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int curr_sum=arr[0];
        int max_sum=arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>curr_sum+arr[i]){
                curr_sum=arr[i];
            }
            else{
                curr_sum+=arr[i];
            }
            
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)