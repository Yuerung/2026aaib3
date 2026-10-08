//week05-2.cpp 學習計畫 Built-in Function 第二題
//LeetCode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
    //week02 教過字串 s 的長度 .length()
    for(int i=0; i<s.length();i++){ //逐字母處理
           if(isupper(s[i])) s[i]=s[i]-'A'+'a';
    }// a[0]='h'; //先試看看(看起來錯的)
    return s; //竟然直接送出去

    }
};
