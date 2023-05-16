// https://leetcode.com/problems/remove-linked-list-elements/

/*
ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return NULL;
        }
        ListNode* curr = head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = curr;
        ListNode* prev = dummy;
        while(curr != NULL){
            if(curr->val == val){
                ListNode* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
*/