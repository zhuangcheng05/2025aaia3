//week14-3.cpp
//445. Add Two Numbers II
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
class Solution {
public:
    ListNode* myReverse(ListNode* head){//自訂函式
        if(head==nullptr || head->next==nullptr)return head;//終止條件
        ListNode* ans= myReverse(head->next);//函式呼叫函式
        head->next->next=head;
        head->next=nullptr;//收尾
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1);//反過來
        ListNode* list2 = myReverse(l2);//反過來
        ListNode* ans =  myaddTwoNumbers(list1, list2);
        return myReverse(ans);
    }
    ListNode* myaddTwoNumbers(ListNode* list1, ListNode* list2){
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        int carry = 0;
        while(list1 != nullptr || list2 != nullptr){
            int now = carry;
            if(list1 != nullptr){
                now+=list1->val;
                list1=list1->next;
            }
            if(list2 != nullptr){
                now+=list2->val;
                list2=list2->next;
            }
            ans2->next = new ListNode(now%10);
            carry = now/10;
            ans2 = ans2->next;
        }
        if(carry>0)ans2->next= new ListNode(carry);
        return ans->next;
    }


};