1. Define the structure:
   - Start by defining a structure that represents a node in the linked list. Each node typically contains a data element and a pointer to the next node.
   ````c
   struct Node {
       int data;
       struct Node* next;
   };
   ```

2. Create a new node:
   - To create a new node, allocate memory dynamically using the `malloc()` function and set the data and next pointer values.
   ````c
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = 10;
   newNode->next = NULL;
   ```

3. Inserting a node at the beginning:
   - To insert a node at the beginning of the linked list, set the next pointer of the new node to the current head of the list and update the head pointer.
   ````c
   newNode->next = head;
   head = newNode;
   ```

4. Inserting a node at the end:
   - To insert a node at the end of the linked list, traverse the list until you reach the last node, then update the next pointer of the last node to the new node.
   ````c
   struct Node* current = head;
   while (current->next != NULL) {
       current = current->next;
   }
   current->next = newNode;
   ```

5. Traversing the linked list:
   - To iterate through the linked list, use a pointer to move from one node to the next until reaching the end (where the next pointer is `NULL`).
   ````c
   struct Node* current = head;
   while (current != NULL) {
       printf("%d ", current->data);
       current = current->next;
   }
   ```

6. Deleting a node:
   - To delete a node from the linked list, you need to update the next pointer of the preceding node to skip the node to be deleted, and then free the memory allocated for that node.
   ````c
   struct Node* current = head;
   struct Node* prev = NULL;

   while (current != NULL && current->data != key) {
       prev = current;
       current = current->next;
   }

   if (current != NULL) {
       if (prev != NULL) {
           prev->next = current->next;
       } else {
           head = current->next;
       }

       free(current);
   }
   ```

7. Freeing the memory:
   - After you have finished using the linked list, remember to free the memory allocated for each node to avoid memory leaks.
   ````c
   struct Node* current = head;
   while (current != NULL) {
       struct Node* temp = current;
       current = current->next;
       free(temp);
   }
   ```
