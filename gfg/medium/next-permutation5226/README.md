# Next Permutation

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**  representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically smallest greater (or next) permutation.

If no next permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 7, 5, 0]
Output: [2, 4, 5, 0, 1, 7]
Explanation: The next permutation of the given array is [2, 4, 5, 0, 1, 7].
```

```
Input: arr[] = [3, 2, 1]
Output: [1, 2, 3]
Explanation: As arr[] is the last permutation, the next permutation is the lowest one.

```

```
Input: arr[] = [3, 4, 2, 5, 1]
Output: [3, 4, 5, 1, 2]
Explanation: The next permutation of the given array is [3, 4, 5, 1, 2].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T10:54:04.984Z  

```cpp
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int mark=-1;
        for(int i=arr.size()-1; i>0; i--){
            if(arr[i]>arr[i-1]){
                mark=i-1;
                break;
            }
        }
        
        if(mark!=-1){
            for(int i=arr.size()-1; i>mark; i--){
                if(arr[i]>arr[mark]){
                    swap(arr[i],arr[mark]);
                    break;
                }
            }
        }
        
        reverse(arr.begin()+(mark+1),arr.end());
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/next-permutation5226/1)