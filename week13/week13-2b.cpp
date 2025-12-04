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
  //week13-2b.cpp
 //21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {  
                ans2->next = list1;        
                list1 = list1->next;
                ans2 = ans2->next;
            } else {
                ans2->next = list2;
                list2 = list2->next;
                ans2 = ans2->next;
            }
        }
        if (list1 != nullptr) ans2->next = list1;
        if (list2 != nullptr) ans2->next = list2;
        return ans->next;  // 移除最後的 return ans;
    }
};