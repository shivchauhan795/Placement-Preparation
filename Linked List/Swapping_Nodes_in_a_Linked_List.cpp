// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

/*
ListNode* swapNodes(ListNode* head, int k) {
        ListNode* check = head;
        int size = 0;
        while(check != NULL){
            check = check->next;
            size++;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 1;
        while(count < k){
            prev = curr;
            curr = curr->next;
            count++;
        }
        ListNode* curr1 = head;
        ListNode* prev1 = NULL;
        int count1 = 1;
        while(count1 < (size-k)+1){
            prev1 = curr1;
            curr1 = curr1->next;
            count1++;
        }
        int temp = curr->val;
        curr->val = curr1->val;
        curr1->val = temp;
        
        return head;
    }
*/