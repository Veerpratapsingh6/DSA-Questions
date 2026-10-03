# Overlapping Intervals

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of intervals  **arr[][]** of size n, where  **arr[i]**  =  **[starti, endi]**  represents the start and end points of the ith interval, merge all overlapping intervals and return the resulting array of non-overlapping intervals.
 **Note:** Two intervals [a, b] and [c, d] such that a ≤ c, are considered overlapping if  c ≤ b.

 **Examples:** 

```
Input: arr[][] = [[1, 3], [2, 4], [6, 8], [9, 10]]
Output: [[1, 4], [6, 8], [9, 10]]
Explanation: In the given intervals we have only two overlapping intervals here, [1, 3] and [2, 4] which on merging will become [1, 4]. Therefore we will return [[1, 4], [6, 8], [9, 10]].

```

```
Input: arr[][] = [[6, 8], [1, 9], [2, 4], [4, 7]]
Output: [[1, 9]]
Explanation: In the given intervals all the intervals overlap with the interval [1, 9]. Therefore we will return [1, 9].

```

 **Constraints:** 
1 ≤ n ≤ 105
0 ≤ starti ≤ endi ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T10:22:13.380Z  

```cpp
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        // Code here
        sort(arr.begin(),arr.end());
        
        for(auto inn_arr:arr){
            if(ans.empty()){
                ans.push_back(inn_arr);
            }
            else if(ans.back()[1]>=inn_arr[0]){
                ans.back()[1]=max(ans.back()[1],inn_arr[1]);
            }
            else{
                ans.push_back(inn_arr);
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/overlapping-intervals--170633/1)