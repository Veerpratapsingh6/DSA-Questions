# Merge Without Extra Space

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]**  and  **b[]** of size  **n** and  **m** respectively, the task is to merge them in sorted order without using any  **extra space**. Modify  **a[]**  so that it contains the first  **n**  elements and modify  **b[]**  so that it contains the last  **m**  elements.

 **Examples:** 

```
Input: a[] = [2, 4, 7, 10], b[] = [2, 3]
Output: a[] = [2, 2, 3, 4], b[] = [7, 10]
Explanation: After merging the two non-decreasing arrays, we get, [2, 2, 3, 4, 7, 10]
```

```
Input: a[] = [1, 5, 9, 10, 15, 20], b[] = [2, 3, 8, 13]
Output: a[] = [1, 2, 3, 5, 8, 9], b[] = [10, 13, 15, 20]
Explanation: After merging two sorted arrays we get [1, 2, 3, 5, 8, 9, 10, 13, 15, 20].

```

```
Input: a[] = [0, 1], b[] = [2, 3]
Output: a[] = [0, 1], b[] = [2, 3]
Explanation: After merging two sorted arrays we get [0, 1, 2, 3].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T11:25:00.607Z  

```cpp
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=b.size();
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        while(n!=0){
            int num=a.back();
            a.pop_back();
            b[n-1]=num;
            n--;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1)