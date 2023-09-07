1. `exit` function:
The `exit` function is used to terminate a program and return a specified exit status to the calling environment. It allows you to explicitly exit the program at any point, bypassing the normal flow of control. The `exit` function takes an integer argument, which represents the exit status. A return value of `0` typically indicates a successful execution, while non-zero values are often used to indicate errors or abnormal terminations.

Here's an example demonstrating the usage of the `exit` function:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Exiting...\n");
        exit(1); // Terminate the program with a non-zero exit status
    }

    printf("The number is: %d\n", num);

    return 0;
}
```

In the above example, if the user enters a non-positive number, the program displays an error message and exits using `exit(1)`, indicating an error condition. If the input is valid, the program continues execution as normal.

2. `calloc` function:
The `calloc` function is used to dynamically allocate memory for an array, initializing all the allocated memory to zero. It takes two arguments: the number of elements to allocate and the size of each element. The total memory allocated is calculated as the product of the number of elements and the size. The `calloc` function returns a pointer to the allocated memory or `NULL` if the allocation fails.

Here's an example demonstrating the usage of the `calloc` function:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int size = 5;

    numbers = calloc(size, sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory allocated successfully.\n");

    // Use the allocated memory

    free(numbers);

    return 0;
}
```

In the above example, `calloc` is used to allocate an array of 5 integers. The `size` parameter specifies the number of elements, and `sizeof(int)` determines the size of each element. If the allocation is successful, a message is printed. After using the allocated memory, it is important to free it using the `free` function to avoid memory leaks.

3. `realloc` function:
The `realloc` function is used to change the size of a previously allocated block of memory. It takes two arguments: a pointer to the previously allocated memory block and the desired new size. The `realloc` function returns a pointer to the reallocated memory block, which may be the same as the original pointer or a new pointer if the memory block had to be moved to a different location. If the reallocation fails, `realloc` returns `NULL`, and the original memory block remains intact.

Here's an example demonstrating the usage of the `realloc` function:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int size = 5;

    numbers = malloc(size * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory allocated successfully.\n");

    // Increase the size of the allocated memory
    int newSize = 10;
    int *temp = realloc(numbers, newSize * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;
    printf("Memory reallocated successfully.\n");

    // Use the reallocated memory

    free(numbers);

    return 0;
}
```

In the above example, `malloc` is initially used to allocate an array of 5 integers. Later, `realloc` is used to increase the size of the previously allocated memory to 10 integers. The `realloc` function returns a pointer to the reallocated memory block, which is assigned to the `temp` pointer. If the reallocation fails, an error message is printed, and the original memory block is freed using `free`. If the reallocation is successful, the `numbers` pointer is updated with the new pointer returned by `realloc`, and the memory can be utilized accordingly.

It's important to note that both `calloc` and `realloc` functions can fail to allocate memory. Therefore, it's good practice to check the return values for `NULL` to handle such scenarios and avoid potential memory-related issues.
