// https://leetcode.com/problems/add-two-numbers/

/*
void insertAtTail(ListNode* &head, ListNode* &tail, int data){
        if(head == NULL){
            ListNode* temp = new ListNode(data);
            head = temp;
            tail = head;
        }
        else{
            ListNode* temp = new ListNode(data);
            tail->next = temp;
            tail = temp;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0){
            int val1 = 0;
            if(l1 != NULL){
                val1 = l1->val;
            }
            int val2 = 0;
            if(l2 != NULL){
                val2 = l2->val;
            }
            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            insertAtTail(head, tail, digit);
            carry = sum/10;
            if(l1 != NULL){
                l1 = l1->next;
            }
            if(l2 != NULL){
                l2 = l2->next;
            }
        }
        return head;
    }
*/