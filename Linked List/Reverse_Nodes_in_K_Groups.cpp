// https://leetcode.com/problems/reverse-nodes-in-k-group/

/*
int getLength(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }   
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        if(getLength(head) < k){
            return head;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        int count = 0;
        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next != NULL){
            head->next = reverseKGroup(next, k);
        }

        return prev;
    }
*/