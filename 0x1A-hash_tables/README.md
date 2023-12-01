Hash tables are a data structure that allows efficient insertion, deletion, and retrieval of key-value pairs. They are implemented using an array and a hash function. Here's a basic overview and a simple example in C:

### Hash Table Overview:

1. **Hash Function:** This function takes a key and converts it into an index in the array. The goal is to distribute keys evenly across the array to minimize collisions.

2. **Array:** It's an array of buckets, each containing a linked list or another structure to handle collisions.

3. **Collision Handling:** Collisions occur when two keys hash to the same index. Collision handling mechanisms include chaining (using linked lists in each bucket) or open addressing.

### Hash Table in C Example (Chaining):

Let's create a simple hash table in C using chaining for collision handling.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size of the hash table array
#define SIZE 10

// Define a structure for key-value pairs
struct KeyValuePair {
    char* key;
    char* value;
    struct KeyValuePair* next; // Pointer to handle collisions
};

// Define the hash table structure
struct HashTable {
    struct KeyValuePair* array[SIZE];
};

// Hash function to generate an index from the key
unsigned int hash(char* key) {
    unsigned int hash_value = 0;
    while (*key) {
        hash_value = (hash_value << 5) + *key++;
    }
    return hash_value % SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(struct HashTable* table, char* key, char* value) {
    // Create a new key-value pair
    struct KeyValuePair* new_pair = (struct KeyValuePair*)malloc(sizeof(struct KeyValuePair));
    new_pair->key = strdup(key);
    new_pair->value = strdup(value);
    new_pair->next = NULL;

    // Calculate the hash value
    unsigned int index = hash(key);

    // Insert the new pair at the beginning of the linked list in the corresponding bucket
    new_pair->next = table->array[index];
    table->array[index] = new_pair;
}

// Function to retrieve the value associated with a key
char* get(struct HashTable* table, char* key) {
    // Calculate the hash value
    unsigned int index = hash(key);

    // Search the linked list in the corresponding bucket
    struct KeyValuePair* current = table->array[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    // Key not found
    return NULL;
}

// Function to print the contents of the hash table
void printHashTable(struct HashTable* table) {
    for (int i = 0; i < SIZE; i++) {
        printf("Bucket %d: ", i);
        struct KeyValuePair* current = table->array[i];
        while (current != NULL) {
            printf("(%s, %s) ", current->key, current->value);
            current = current->next;
        }
        printf("\n");
    }
}

// Function to free memory allocated for the hash table
void freeHashTable(struct HashTable* table) {
    for (int i = 0; i < SIZE; i++) {
        struct KeyValuePair* current = table->array[i];
        while (current != NULL) {
            struct KeyValuePair* temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
}

int main() {
    // Create a hash table
    struct HashTable myTable;
    
    // Initialize each bucket to NULL
    for (int i = 0; i < SIZE; i++) {
        myTable.array[i] = NULL;
    }

    // Insert key-value pairs
    insert(&myTable, "apple", "red");
    insert(&myTable, "banana", "yellow");
    insert(&myTable, "grape", "purple");

    // Print the contents of the hash table
    printHashTable(&myTable);

    // Retrieve values
    printf("Value for 'banana': %s\n", get(&myTable, "banana"));
    printf("Value for 'orange': %s\n", get(&myTable, "orange"));

    // Free memory
    freeHashTable(&myTable);

    return 0;
}
```

In this example, the `hash` function is a simple string hash function, and the hash table uses chaining to handle collisions. The `insert`, `get`, `printHashTable`, and `freeHashTable` functions provide basic operations on the hash table. 