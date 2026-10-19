# Maximum Product Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

 **Note:**  It is guaranteed that the answer fits in a 32-bit integer.

**Examples
**

```
Input: arr[] = [-2, 6, -3, -10, 0, 2]
Output: 180
Explanation: The subarray with maximum product is [6, -3, -10] with product = 6  *(-3)*  (-10) = 180.
```

```
Input: arr[] = [-1, -3, -10, 0, 6]
Output: 30
Explanation: The subarray with maximum product is [-3, -10] with product = (-3) * (-10) = 30.
```

```
Input: arr[] = [2, 3, 4] 
Output: 24 
Explanation: For an array with all positive elements, the result is product of all elements. 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T07:02:20.321Z  

```cpp
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxi=arr[0];
        int mini=arr[0];
        int ans=arr[0];
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i]<0){
                swap(maxi,mini);
            }
            maxi=max(arr[i],maxi*arr[i]);
            mini=min(arr[i],mini*arr[i]);
            
            ans=max(ans,maxi);
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1)