//week12-1.cpp每日挑戰 2016-11-26 賺10個金幣
//LeetCode 3360.Stone Removal Game
//A同學、B同學,依序拿走石頭10,0,9,7,6,5,....
//沒法拿到石頭,就輸了
class Solution {
public:
    bool canAliceWin(int n) {
        //A先拿10,B再拿9,A再拿8,B再拿7
        for(int i=10;i>0;i--){//拿走石頭
            n-=i;// 拿走i顆石頭
            if(n<0){//石頭拿不夠,變負的
                if(i%2==0) return false;//A輸了(A拿偶數)
                else return true;//A得勝
            }
        }
        return true;
    }
};
