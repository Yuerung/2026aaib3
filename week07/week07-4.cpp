//week07-4.cpp 學習計畫 Simulation 第3題超難
// Leet Code 1275. Find Winner on a Tic Tac Toe Game 井字遊戲
class Solution {
public: // 大資料結構 moves,裡面裝 中資料結構 vector<int> move, 裡面裝小資料結構 int i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={0};
        string result [3]={"Draw","A","B"};
        int who=1;
        for (vector<int> move: moves){//迴圈,逐一處理中資料結構
            int i=move[0],j=move[1];
            a[i][j]=who;// 現在輪到誰who 來下棋
            if(a[i][0] == who && a[i][1]==who && a[i][2]==who) return result[who];
            if(a[0][j] == who && a[1][j]==who && a[2][j]==who) return result[who];

            if(a[0][0]== who && a[1][1]==who && a[2][2]==who) return result[who];
            if(a[2][0]== who && a[1][1]==who && a[0][2]==who) return result[who];

            if(who==1) who=2;
            else who=1;
        }
        if (moves.size()==9)  return "Draw";//最後迴圈,沒有人獲勝,就平手Draw(這是錯的!!)
        else return "Pending";
    }
};
