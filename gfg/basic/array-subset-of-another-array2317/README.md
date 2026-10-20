# Array Subset

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two arrays  **a[]** and  **b[]**, your task is to determine whether  **b[]**  is a subset of  **a[]**.

 **Examples:** 

```
Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
Output: true
Explanation: b[] is a subset of a[]
```

```
Input: a[] = [1, 2, 3, 4, 4, 5, 6], b[] = [1, 2, 4]
Output: true
Explanation: b[] is a subset of a[]
```

```
Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3]
Output: false
Explanation: b[] is not a subset of a[]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T11:50:05.461Z  

```cpp
class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        if(b.size()>a.size()){
            return false;
        }
        unordered_map<int,int>st;
        for(int x:a){
            st[x]++;
        }
        for(int i=0; i<b.size(); i++){
            if(st[b[i]]==0){
                return false;
            }
            st[b[i]]--;
        }
        return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1)