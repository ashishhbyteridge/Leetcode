/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA, *temp2 = headB;
        int cnt1 = 1, cnt2 = 1;
        while (temp1){
            cnt1++;
            temp1 = temp1->next;
        }
        while(temp2){
            cnt2++;
            temp2 = temp2->next;
        }
        temp1 = headA; temp2 = headB;
        if(cnt2 > cnt1){
            while(cnt2 != cnt1){
                cnt2--;
                temp2 = temp2->next;
            }   
        
        }
        if(cnt1 > cnt2){
            while(cnt2 != cnt1){
                cnt1--;
                temp1 = temp1->next;
            }
        }
        while(temp1 && temp2){
            //cout << temp1->val << " " << temp2->val << endl;
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
    // return temp1;
};