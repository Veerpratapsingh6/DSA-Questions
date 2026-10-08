# Pairs with 0 Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array  **arr**, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

 **Examples:** 

```
Input: arr = [-1, 0, 1, 2, -1, -4]
Output: [[-1, 1]]
Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
arr[2] + arr[4] = 1 + (-1) = 0.
The distinct pair are [-1,1].

```

```
Input: arr = [6, 1, 8, 0, 4, -9, -1, -10, -6, -5]
Output: [[-6, 6],[-1, 1]]
Explanation: The distinct pairs are [-1, 1] and [-6, 6].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T15:25:28.281Z  

```cpp
class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        
        while (i<j){
            int sum=arr[i]+arr[j];
            if(sum==0){
                ans.push_back({arr[i],arr[j]});
                
                int left_val=arr[i];
                while(i<j&&arr[i]==left_val){
                    i++;
                }
                
                int right_val=arr[j];
                while(i<j&&arr[i]==right_val){
                    j--;
                }
            }
            else if(sum>0){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1)