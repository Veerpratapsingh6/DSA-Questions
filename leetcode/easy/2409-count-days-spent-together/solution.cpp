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