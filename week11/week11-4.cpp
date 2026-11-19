/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 //LeetNode 21. Merge Two Sorted List
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans=new ListNode(999);
        ListNode*now=ans;
        while(list1 !=nullptr && list2!=nullptr){
            if(list1->val < list2->val){
                now->next=new ListNode(list1->val);
                now=now->next;
                list1=list1->next;
            }else{
                now->next=new ListNode(list2->val);
                now=now-> next;
                list2=list2->next;
            }
        }
        if(list1)now->next=list1;
        if(list2)now->next=list2;
        return ans->next;
    }
};
