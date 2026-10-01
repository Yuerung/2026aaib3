///week04-1.cpp 學習計畫 Basic 第6題
///LeetCode 283 Move Zeroes 把0移到陣列右邊
///就是把綠色的數字,一道左邊(剩下補0)題目會自己檢查
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=0){
                nums[k]=nums[i];
                k++;
            }
        }// 移動完後,右邊會有殘留的0
        for(int i=k;i<nums.size(); i++){
            nums[i]=0;
        }

    }
};
