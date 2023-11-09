In C, a doubly linked list is a data structure that consists of a sequence of nodes, where each node contains a data element and two pointers: one to the previous node and one to the next node. This structure allows for efficient traversal in both directions. Let's go through the steps to create and manipulate a doubly linked list:

1. **Define the Node Structure:**
   Start by defining the structure for a doubly linked list node. Each node should contain a data element and two pointers to the previous and next nodes.
   ````c
   struct Node {
       int data;
       struct Node* prev;
       struct Node* next;
   };
   ```

2. **Initialize the Head and Tail Pointers:**
   Declare two pointers: one for the head (the first node) and one for the tail (the last node) of the doubly linked list.
   ````c
   struct Node* head = NULL;
   struct Node* tail = NULL;
   ```

3. **Creating a New Node:**
   Create a function to dynamically allocate memory for a new node and initialize its data and pointers.
   ````c
   struct Node* createNode(int data) {
       struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
       newNode->data = data;
       newNode->prev = NULL;
       newNode->next = NULL;
       return newNode;
   }
   ```

4. **Inserting a Node at the Beginning:**
   Create a function to insert a new node at the beginning of the doubly linked list.
   ````c
   void insertAtBeginning(int data) {
       struct Node* newNode = createNode(data);
       if (head == NULL) {
           head = tail = newNode;
       } else {
           newNode->next = head;
           head->prev = newNode;
           head = newNode;
       }
   }
   ```

5. **Inserting a Node at the End:**
   Create a function to insert a new node at the end of the doubly linked list.
   ````c
   void insertAtEnd(int data) {
       struct Node* newNode = createNode(data);
       if (head == NULL) {
           head = tail = newNode;
       } else {
           tail->next = newNode;
           newNode->prev = tail;
           tail = newNode;
       }
   }
   ```

6. **Traversing the Doubly Linked List:**
   Create a function to traverse and print the elements of the doubly linked list in forward and backward directions.
   ````c
   void printList() {
       struct Node* current = head;
       printf("Forward: ");
       while (current != NULL) {
           printf("%d ", current->data);
           current = current->next;
       }
       printf("\n");

       printf("Backward: ");
       current = tail;
       while (current != NULL) {
           printf("%d ", current->data);
           current = current->prev;
       }
       printf("\n");
   }
   ```

7. **Main Function and Testing:**
   In the `main` function, you can test the doubly linked list by inserting nodes and printing the list.
   ````c
   int main() {
       insertAtEnd(1);
       insertAtEnd(2);
       insertAtEnd(3);
       insertAtBeginning(0);
       printList();
       return 0;
   }
   ```

   The output will be:
   ````
   Forward: 0 1 2 3
   Backward: 3 2 1 0
   ```
