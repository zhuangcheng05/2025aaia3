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
 //week13-3.cpp
 //2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*  ans = new ListNode(999);
       ListNode*  ans2 = ans;
       int carry = 0;
       while(l1 != nullptr || l2 != nullptr){
        int now = carry;
        if(l1!=nullptr){
            now+=l1->val;
            l1=l1->next;
        }
        if(l2!=nullptr){
            now+=l2->val;//把直加進去
            l2=l2->next;//換下一筆
        }
        ans2->next = new ListNode(now%10);//個位數準備一個node
        ans2 = ans2->next;//換下一筆
        carry =now /10;//進位的部分
       }
       if(carry>0)ans2->next = new ListNode(carry);//還有進位
       return ans->next;
    }
};