//week14-1.cpp
//206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        vector<int>a;
        while(head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;//倒過來的回圈
        for(int i=a.size()-1;i>=0;i--){
            ans2->next = new ListNode(a[i]);//下一筆
            ans2 = ans2->next;//到下一筆資料
        }
        return ans->next;
    }
};