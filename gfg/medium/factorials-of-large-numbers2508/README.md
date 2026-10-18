# Factorials of Large

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer  **n,**  find its factorial. Return a list of integers denoting the digits that make up the factorial of n.

 **Examples:** 

```
Input: n = 5
Output: [1, 2, 0]
Explanation: 5! = 1 *2* 3 *4* 5 = 120

```

```
Input: n = 10
Output: [3, 6, 2, 8, 8, 0, 0]
Explanation: 10! = 1 *2* 3 *4* 5 *6* 7 *8* 9*10 = 3628800

```

```
Input: n = 1
Output: [1]
Explanation: 1! = 1 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T09:00:49.638Z  

```cpp
class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>store;
        store.push_back(1);
        for(int i=2; i<=n; i++){
            int carry=0;
            for(int j=0; j<store.size(); j++){
                int temp=store[j]*i+carry;
                store[j]=temp%10;
                carry=temp/10;
            }
            while(carry){
                store.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(store.begin(),store.end());
        return store;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1)