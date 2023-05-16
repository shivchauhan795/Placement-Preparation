// https://leetcode.com/problems/swap-nodes-in-pairs/

// Approach 1
/*
ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp = new ListNode(-1);
        temp->next = curr;
        ListNode* prev = temp;
        while(curr != NULL && curr->next != NULL){
            // Swapping
            prev->next = curr->next;
            curr->next = prev->next->next;
            prev->next->next = curr;

            // Incrimenting pointers to the positions
            prev = curr;
            curr = curr->next;
        }
        return temp->next;
    }
*/

// Approach 2

// Same as Reverse Nodes in K-Groups