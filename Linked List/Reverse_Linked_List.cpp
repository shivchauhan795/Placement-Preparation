// https://leetcode.com/problems/reverse-linked-list/

/*
ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* chotu = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return chotu;
    }
*/