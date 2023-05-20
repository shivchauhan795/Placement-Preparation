// https://leetcode.com/problems/merge-two-sorted-lists/

/*
ListNode* merge(ListNode* list1, ListNode* list2){
        if(list1->next == NULL){
            list1->next = list2;
            return list1;
        }
        ListNode* curr1 = list1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        ListNode* next2 = curr2->next;
        while(curr2 != NULL && next1 != NULL){
            if((curr2->val >= curr1->val) && (curr2->val <= next1->val)){
                curr1->next = curr2;
                next2 = curr2->next;    // Always remember to do this as next2 is changed in the below line. This step is very important to keep track otherwise TLE.
                curr2->next = next1;
                curr1 = curr2;
                curr2 = next2;
            }
            else{
                curr1 = next1;
                next1 = next1->next;
                if(next1 == NULL){
                    curr1->next = curr2;
                    return list1;
                }
            }
        }
        return list1;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1->val <= list2->val){
            return merge(list1, list2);
        }
        else{
            return merge(list2, list1);
        }
    }
*/