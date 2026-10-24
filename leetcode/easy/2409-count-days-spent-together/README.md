# Count Days Spent Together

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Alice and Bob are traveling to Rome for separate business meetings.

You are given 4 strings `arriveAlice`, `leaveAlice`, `arriveBob`, and `leaveBob`. Alice will be in the city from the dates `arriveAlice` to `leaveAlice` (**inclusive**), while Bob will be in the city from the dates `arriveBob` to `leaveBob` (**inclusive**). Each will be a 5-character string in the format `"MM-DD"`, corresponding to the month and day of the date.

Return *the total number of days that Alice and Bob are in Rome together.* 

You can assume that all dates occur in the  **same**  calendar year, which is  **not**  a leap year. Note that the number of days per month can be represented as: `[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]`.

 

 **Example 1:** 

```
Input: arriveAlice = "08-15", leaveAlice = "08-18", arriveBob = "08-16", leaveBob = "08-19"
Output: 3
Explanation: Alice will be in Rome from August 15 to August 18. Bob will be in Rome from August 16 to August 19. They are both in Rome together on August 16th, 17th, and 18th, so the answer is 3.

```

 **Example 2:** 

```
Input: arriveAlice = "10-01", leaveAlice = "10-31", arriveBob = "11-01", leaveBob = "12-31"
Output: 0
Explanation: There is no day when Alice and Bob are in Rome together, so we return 0.

```

 

 **Constraints:** 

- All dates are provided in the format "MM-DD".
- Alice and Bob's arrival dates are earlier than or equal to their leaving dates.
- The given dates are valid dates of a non-leap year.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 38.18%)  
**Submitted:** 2026-10-24T11:04:07.196Z  

```cpp
class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        size_t Alice_arrive_hyphen=arriveAlice.find('-');
        string A_arrives_month_str=arriveAlice.substr(0,Alice_arrive_hyphen);
        string A_arrives_day_str=arriveAlice.substr(Alice_arrive_hyphen+1);

        int A_arrives_month=stoi(A_arrives_month_str);
        int A_arrives_day=stoi(A_arrives_day_str);

        size_t Alice_leave_hyphen=leaveAlice.find('-');
        string A_leaves_month_str=leaveAlice.substr(0,Alice_leave_hyphen);
        string A_leaves_day_str=leaveAlice.substr(Alice_leave_hyphen+1);

        int A_leaves_month=stoi(A_leaves_month_str);
        int A_leaves_day=stoi(A_leaves_day_str);


        size_t Bob_arrive_hyphen=arriveBob.find('-');
        string B_arrives_month_str=arriveBob.substr(0,Bob_arrive_hyphen);
        string B_arrives_day_str=arriveBob.substr(Bob_arrive_hyphen+1);

        int B_arrives_month=stoi(B_arrives_month_str);
        int B_arrives_day=stoi(B_arrives_day_str);

        size_t Bob_leave_hyphen=leaveBob.find('-');
        string B_leaves_month_str=leaveBob.substr(0,Bob_leave_hyphen);
        string B_leaves_day_str=leaveBob.substr(Bob_leave_hyphen+1);

        int B_leaves_month=stoi(B_leaves_month_str);
        int B_leaves_day=stoi(B_leaves_day_str);

        vector<int>month_day={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int A_arrives_total=A_arrives_day;
        for(int i=0; i<A_arrives_month-1; i++){
            A_arrives_total+=month_day[i];
        }
        int A_leaves_total=A_leaves_day;
        for(int i=0; i<A_leaves_month-1; i++){
            A_leaves_total+=month_day[i];
        }

        int B_arrives_total=B_arrives_day;
        for(int i=0; i<B_arrives_month-1; i++){
            B_arrives_total+=month_day[i];
        }
        int B_leaves_total=B_leaves_day;
        for(int i=0; i<B_leaves_month-1; i++){
            B_leaves_total+=month_day[i];
        }

        int start=max(A_arrives_total,B_arrives_total);
        int end=min(A_leaves_total,B_leaves_total);

        if(start>end){
            return 0;
        }
        return end-start+1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-days-spent-together/)