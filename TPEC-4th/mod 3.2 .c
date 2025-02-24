SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    // Create a new node and set its data
    SinglyLinkedListNode* newNode = (SinglyLinkedListNode*) malloc(sizeof(SinglyLinkedListNode));
    newNode->data = data;
    newNode->next = NULL;  // The new node should point to NULL (it will be the last node)

    // If the list is empty, make the new node the head
    if (head == NULL) {
        return newNode;
    }

    // If the list is not empty, traverse to the last node
    SinglyLinkedListNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Append the new node at the end
    current->next = newNode;

    return head;
}
