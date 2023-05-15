// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

/*
ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* curr = head;
        while(curr != NULL){
            if((curr->next != NULL) && curr->val == curr->next->val){
                ListNode* temp = curr->next->next;
                ListNode* toBeDeleted = curr->next;
                delete toBeDeleted;
                curr->next = temp;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
*/