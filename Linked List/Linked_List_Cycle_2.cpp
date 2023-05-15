// https://leetcode.com/problems/linked-list-cycle-ii/

/*
    ListNode* isPresent(ListNode* head){
        if(head == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow != NULL && fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
    }
    ListNode* getStart(ListNode* head){
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* intersection = isPresent(head);
        ListNode* slow = head;
        if(intersection == NULL){
            return NULL;
        }
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
    ListNode *detectCycle(ListNode *head) {
        return getStart(head);
    }
*/