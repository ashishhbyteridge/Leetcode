class Solution {
public:
    bool hasCycle(ListNode *head) {
        int cnt = 0;
        if(head == NULL || head->next == NULL) return false;
        ListNode *slow = head, *fast = head->next;
        while(fast && slow != fast){
            if(cnt)slow = slow->next;
            fast = fast->next;
            cnt ^= 1;
        }
        if(fast == NULL ) return false;
        else return fast;
    }
};