//week12-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 超級大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(999);
        ListNode*now=ans;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){ //把&&改成||

            if(l1!=nullptr)carry+=l1->val;
            if(l2!=nullptr)carry+=l2->val;
            now->next=new ListNode(carry%10);
            carry=carry/10;
            now=now->next;
            if(l1!=nullptr)l1=l1->next;
            if(l2!=nullptr)l2=l2->next;
        }
        if(carry) now->next=new ListNode(carry);
        return ans->next;

         //while(l1!=nullptr || l2!=nullptr){
         //   int val-l1->val+l2->val+carry;
         //   now->next=new ListNode(carry%10);
        //    carry=carry/10;
        //    now=now->next;
        //    l1=l1->next;
        //    l2=l2->next;
        //}
        //return ans->next;

    }
};
