A linked list is a data structure that consists of a sequence of nodes, where each node contains a data element and a reference (or pointer) to the next node in the list. Linked lists are dynamic data structures that allow efficient insertion and deletion operations.

To begin, let's start with the structure definition for a linked list node in C:

```c
struct Node {
    int data;           // Data element
    struct Node* next;  // Pointer to the next node
};
```

In this example, the `Node` structure has an `int` data element and a pointer `next` that points to the next node in the list.

To create a linked list, we need to keep track of the first node in the list, often referred to as the "head" of the list. Initially, the head will be set to `NULL` to indicate an empty list.

```c
struct Node* head = NULL;
```

Now, let's go through the basic operations of a linked list:

1. Insertion:
   - Inserting at the beginning: To insert a node at the beginning of the list, we create a new node, assign the data to it, and update the `next` pointer to point to the current head. Then, we update the head to point to the new node.
   
   ````c
   void insertAtBeginning(int value) {
       struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
       newNode->data = value;
       newNode->next = head;
       head = newNode;
   }
   ```
   
   - Inserting at the end: To insert a node at the end of the list, we traverse the list until we reach the last node. Then, we create a new node, assign the data to it, and update the `next` pointer of the last node to point to the new node.
   
   ````c
   void insertAtEnd(int value) {
       struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
       newNode->data = value;
       newNode->next = NULL;
       
       if (head == NULL) {
           head = newNode;
           return;
       }
       
       struct Node* current = head;
       while (current->next != NULL) {
           current = current->next;
       }
       current->next = newNode;
   }
   ```

2. Deletion:
   - Deleting the first node: To delete the first node of the list, we update the head to point to the next node and free the memory occupied by the previous head.
   
   ````c
   void deleteFirstNode() {
       if (head == NULL) {
           printf("List is empty.\n");
           return;
       }
       
       struct Node* temp = head;
       head = head->next;
       free(temp);
   }
   ```
   
   - Deleting a specific node: To delete a node with a given value, we traverse the list to find the node. Once found, we update the `next` pointer of the previous node to skip the node to be deleted, and free the memory.
   
   ````c
   void deleteNode(int value) {
       if (head == NULL) {
           printf("List is empty.\n");
           return;
       }
       
       struct Node* current = head;
       struct Node* previous = NULL;
       
       // Traverse the list to find the node
       while (current != NULL && current->data != value) {
           previous = current;
           current = current->next;
       }
       
       if (current == NULL) {
           printf("Node with value %d not found.\n", value);
           return;
       }
       
       if (previous != NULL) {
           previous->next = current->next;
       } else {
           head = current->next;
       }
       
       free(current);
   }
   ```

3. Displaying the list:
   - To print the elements of the linked list, we traverse through each node and print its data.
   
   ````c
   void displayList() {
       if (head == NULL) {
           printf("List is empty.\n");
           return;
       }
       
       struct Node* current = head;
       while (current != NULL) {
           printf("%d ", current->data);
           current = current->next;
       }
       printf("\n");
   }
   ```

Remember to include the necessary header files (`stdio.h` for input/output and `stdlib.h` for dynamic memory allocation) at the beginning of your program.

These are the basic operations of a linked list in C. You can now create, insert, delete, and display elements in a linked list. 