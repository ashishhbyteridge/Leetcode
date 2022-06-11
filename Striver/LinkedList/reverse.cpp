class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *headNode = NULL;
        while(head != NULL){
            ListNode *nextNode = head->next;
            head->next = headNode;
            headNode = head;
            head = nextNode;
        }
        return headNode;
    }
};