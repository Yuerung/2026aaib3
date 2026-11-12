// week10-3.cpp 學習計畫 Math 第2題
// LeetCode 1491. Average Salary Excluding the Maximum Salary
//把最高薪、最低薪,扣掉。剩下的平均
class Solution {
public:
    double average(vector<int>& salary) {
        double total=0;
        int M=salary[0],m=salary[0];
        for(int now:salary){
            if(now>M) M=now;
            if(now<m) m=now;
            total+=now;
        }
        return (total-M-m)/(salary.size()-2);
        //return tatal?salary.size();錯，要扣掉最高薪最低薪
    }
};
