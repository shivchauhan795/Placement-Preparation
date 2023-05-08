// https://leetcode.com/problems/middle-of-the-linked-list/

/*
ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            length++;
        }
        int ans = (length/2);
        ListNode* temp1 = head;
        int cnt = 0;
        while(cnt < ans){
            temp1 = temp1->next;
            cnt++;
        }
        return temp1;
    }
*/