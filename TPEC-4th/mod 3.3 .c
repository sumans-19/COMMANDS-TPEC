SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    // Create a new node
    SinglyLinkedListNode* newNode = (SinglyLinkedListNode*) malloc(sizeof(SinglyLinkedListNode));
    newNode->data = data;
    newNode->next = NULL;
    
    // If inserting at the head (position 0)
    if (position == 0) {
        newNode->next = llist;
        return newNode;
    }

    // Traverse the list to find the node before the desired position
    SinglyLinkedListNode* current = llist;
    int index = 0;
    
    // Traverse until the node just before the desired position
    while (current != NULL && index < position - 1) {
        current = current->next;
        index++;
    }

    // If current is NULL, the position is out of range; otherwise, insert the new node
    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    }

    return llist;
}
