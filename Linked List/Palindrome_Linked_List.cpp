// https://leetcode.com/problems/palindrome-linked-list/description/

/*
    Complexity:
    TC -> O(n)      SC -> O(1)
*/

/*
ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* temp){
        ListNode* curr = temp;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){
            return true;
        }
        // get middle element
        ListNode* middle = getMid(head);
        // reverse the remaining list after middle
        middle->next = reverse(middle->next);
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        while(head2 != NULL){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
*/