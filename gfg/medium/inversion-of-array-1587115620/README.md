# Count Inversions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**. You have to find the Inversion Count of the array. Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
```

```
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
```

```
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T13:25:52.857Z  

```cpp
class Solution {
  public:
  
    long long merge(vector<int> &arr,int start, int mid, int end){
        int len1=mid-start+1;
        int len2=end-mid;
        
        int *first=new int[len1];
        int *second=new int[len2];
        
        int main_idx=start;
        
        for(int i=0; i<len1; i++){
            first[i]=arr[main_idx];
            main_idx++;
        }
        
        main_idx=mid+1;
        
        for(int i=0; i<len2; i++){
            second[i]=arr[main_idx];
            main_idx++;
        }
        
        main_idx=start;
        int idx1=0;
        int idx2=0;
        
        long long count=0;
        
        while(idx1<len1 && idx2<len2){
            if(first[idx1]<=second[idx2]){
                arr[main_idx]=first[idx1];
                main_idx++;
                idx1++;
            }
            else{
                count+=len1-idx1;
                arr[main_idx]=second[idx2];
                main_idx++;
                idx2++;
            }
        }
        
        while(idx1<len1){
            arr[main_idx]=first[idx1];
            main_idx++;
            idx1++;
        }
        
        while(idx2<len2){
            arr[main_idx]=second[idx2];
            main_idx++;
            idx2++;
        }
        return count;
    }
  
  
  
    long long merge_sort(vector<int> &arr,int start, int end){
        
        if(start>=end){
            return 0;
        }
        
        long long count=0;
        int mid=start+(end-start)/2;
        
        count+=merge_sort(arr,start,mid);
        count+=merge_sort(arr,mid+1,end);
        count+=merge(arr,start,mid,end);
        return count;
    }
  
  
    int inversionCount(vector<int> &arr) {
        // code here
        int start=0;
        int end=arr.size()-1;
        long long ans=merge_sort(arr,start,end);
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)