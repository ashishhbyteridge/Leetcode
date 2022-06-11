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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * ans = new ListNode(0);
        ListNode *ansNode = ans;
        while(l1 || l2){
            int sum = (l1 ? l1->val : 0) + (l2 ? l2 -> val : 0) + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans->next = new ListNode(sum);
            ans = ans->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry){
            ans->next = new ListNode(carry);
        }
        return ansNode->next;
    }
};