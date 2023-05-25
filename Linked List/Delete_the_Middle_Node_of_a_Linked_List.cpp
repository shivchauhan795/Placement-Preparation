// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

/*
ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head->next->next;              // Point to remember
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return head;
    }
*/