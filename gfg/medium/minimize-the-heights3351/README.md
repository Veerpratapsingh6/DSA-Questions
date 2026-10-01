# Minimize the Heights

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  representing the heights of n towers and a positive integer  **k**. For each tower, perform exactly one of the following operations exactly once:

- Increase its height by k, or
- Decrease its height by k.

After performing the operation on every tower, the height of any tower must not become negative.

Return the minimum possible difference between the heights of the tallest and the shortest towers after modifying all the towers.

 **Examples :** 

```
Input: k = 2, arr[] = [1, 5, 8, 10]
Output: 5
Explanation: The array can be modified as [1+k, 5-k, 8-k, 10-k] = [3, 3, 6, 8]. The difference between the largest and the smallest is 8-3 = 5.

```

```
Input: k = 3, arr[] = [3, 9, 12, 16, 20]
Output: 11
Explanation: The array can be modified as [3+k, 9+k, 12-k, 16-k, 20-k] = [6, 12, 9, 13, 17]. The difference between the largest and the smallest is 17-6 = 11. 

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T06:40:09.793Z  

```cpp
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int ans=arr[arr.size()-1]-arr[0];
        for(int i=0; i<arr.size()-1; i++){
            int minH=min(arr[0]+k,arr[i+1]-k);
            int maxH=max(arr[i]+k,arr[arr.size()-1]-k);
            
            if(minH<0){
                continue;
            }
            
            ans=min(ans,maxH-minH);
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1)