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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt= 0, i = 1;
        ListNode *temp = head;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        if(cnt == n) return head->next;
        for(temp = head; i < cnt - n; i++ ) temp = temp->next;
        if(temp && temp->next){
            temp->next = temp->next->next;
        }
        return head;
    }
};