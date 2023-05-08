// https://leetcode.com/problems/linked-list-cycle/
/*
bool hasCycle(ListNode *head) {
        // Linked List is Empty
        if(head == NULL){
            return false;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
*/