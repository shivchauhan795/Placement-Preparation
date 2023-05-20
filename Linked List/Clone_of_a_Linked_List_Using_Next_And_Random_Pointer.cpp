// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/*
    Approach 1:
    clone the list using next pointer and then map the old nodes to the new nodes and then apply the random pointer using map.

    Approach 2:
    clone the list using next pointer and then change the linkes and then solve.
*/

// Approach 1:

/*
void insertAtTail(Node* &cloneHead, Node* &cloneTail, int data){
        if(cloneHead == NULL){
            Node* temp = new Node(data);
            cloneHead = temp;
            cloneTail = temp;
        }
        else{
            Node* temp = new Node(data);
            cloneTail->next = temp;
            cloneTail = temp;
        }
    }
    Node *copyList(Node *head)
    {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        // clone list is made with next pointer
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // A mapping of original node with clone node is made
        unordered_map<Node*, Node*> oldToNewNode;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL){
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL){
            cloneNode->arb = oldToNewNode[originalNode->arb];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        return cloneHead;
    }
*/

// Approach 2:

/*
void insertAtTail(Node* &cloneHead, Node* &cloneTail, int data){
        if(cloneHead == NULL){
            Node* temp = new Node(data);
            cloneHead = temp;
            cloneTail = temp;
        }
        else{
            Node* temp = new Node(data);
            cloneTail->next = temp;
            cloneTail = temp;
        }
    }
    Node *copyList(Node *head)
    {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        // step 1: clone list is made with next pointer
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // step 2: add clone nodes in between original nodes
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            // linking originalNode links to cloneNode
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            // linking cloneNode links to originalNode
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        
        // step 3: random pointers are copied
        temp = head;
        while(temp != NULL){
            if(temp->next != NULL){
                temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
            }
            temp = temp->next->next;
        }
        
        // step 4: revert changes done in step 2
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            if(originalNode != NULL){
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }
        return cloneHead;
    }
*/