
<h1 align="center">0x08. C - Recursion</h1>

<p align="center">
<img src="./imgs/a88.jpeg" alt="A meme about leonardo dicaprio saying 'we need to go deeper'">
</p>

## Resources
- [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230308%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230308T140244Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=643abdea1ac2d004bbae216158d409e46d39f0ea54263a37e9af59f269afc6e6)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)


## Learning Objectives
- [What is recursion](#what-is-recursion)
- [How to implement recursion](#how-to-implement-recursion)
- [In what situations you should implement recursion](#in-what-situations-you-should-implement-recursion)
- [In what situations you shouldn’t implement recursion](#in-what-situations-you-shouldnt-implement-recursion)


### What is recursion
Recursion is a programming technique that involves solving a problem by breaking it down into smaller, simpler sub-problems of the same type. This technique is based on the idea of a function calling itself, and it can be used to solve a wide range of problems in computer science and mathematics.

Recursion is particularly useful for problems that exhibit a recursive structure, such as traversing a tree or computing a factorial. In such cases, a function can call itself repeatedly, with each call operating on a smaller piece of the problem until the base case is reached.

A base case is a simple case that can be solved directly, without recursion. The base case is crucial to the success of the recursive algorithm, as it provides the stopping point for the recursion.

Recursion is a powerful tool for solving certain types of problems, but it can also be difficult to understand and implement correctly. Improper use of recursion can lead to infinite loops, stack overflow errors, and other issues. Therefore, it is important to carefully design and test recursive algorithms to ensure that they work correctly and efficiently.


### How to implement recursion
To implement recursion in a programming language, you need to define a function that calls itself, usually with a smaller version of the original problem. This process continues until the function reaches a base case, at which point the recursion stops and the function returns a result.

Here's a simple example in Python that demonstrates recursion:

```c
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
```
In this example, the `factorial` function calculates the factorial of a given number `n`. It does this by calling itself with `n-1` as the argument, until it reaches the base case of `n=0`, at which point it returns 1.

When you call `factorial(5)`, for example, the function will recursively call itself with `4`, `3`, `2`, and `1`, until it reaches the base case of `n=0`. It will then return 1, which will be multiplied by the intermediate results to calculate the final value of `120` (which is `5!`).

It's important to note that recursive functions can sometimes lead to performance issues or stack overflow errors if not implemented correctly, so it's important to use them judiciously and test them thoroughly.

### In what situations you should implement recursion

Recursion is a powerful technique that can be used in a wide range of programming problems, particularly those that involve traversing or manipulating hierarchical data structures such as trees, graphs, or nested lists.

Here are some common situations where recursion is often used:

1. **Traversing or searching hierarchical data structures:** Recursion can be useful for traversing or searching hierarchical data structures, such as binary trees, where each node has two child nodes.
2. **Implementing mathematical functions:** Recursion can be used to implement mathematical functions that have a recursive definition, such as factorial, Fibonacci series, and GCD (greatest common divisor). 
3. **Backtracking:** Recursion can be used in backtracking algorithms, where a function is called repeatedly to explore all possible solutions to a problem, backtracking when a solution is found to be incorrect. 
4. **Divide-and-conquer algorithms:** Recursion can be used to implement divide-and-conquer algorithms, such as quicksort and mergesort, where a problem is recursively divided into smaller sub-problems until they become simple enough to solve directly. 
5. **Processing nested data structures:** Recursion can be used to process nested data structures such as lists, dictionaries, and tuples, where each element can contain nested sub-elements.

Overall, recursion can be a powerful tool when used appropriately, but it's important to consider the potential performance issues and stack overflow errors that can arise if recursion is used incorrectly. Therefore, it's important to choose an appropriate algorithm design and to test your code thoroughly.

### In what situations you shouldn’t implement recursion

While recursion can be a powerful technique in solving some programming problems, there are also situations where it may not be the best choice. Here are some common scenarios where recursion might not be the most appropriate approach:

1. **Large input sizes:** Recursion can quickly consume a lot of memory and stack space, which can be problematic for large input sizes. This can lead to stack overflow errors and poor performance.
2. **Iterative algorithms:** In some cases, an iterative algorithm may be more efficient and easier to implement than a recursive algorithm. This is particularly true when the problem does not have a recursive structure or when the recursion depth is not predictable.
3. **Complexity:** Recursion can be difficult to understand and implement correctly, especially for beginners. This can lead to bugs and poor performance, which can be difficult to debug and fix.
4. **Performance:** Recursion can be slower than iterative algorithms in some cases, particularly when the recursion depth is not predictable. This can lead to poor performance and stack overflow errors.
5. **Memory usage:** Recursion can consume a lot of memory and stack space, which can be problematic for large input sizes. This can lead to stack overflow errors and poor performance.
6. **Code readability and maintainability:** Recursive code can be more difficult to read and understand than iterative code, particularly for programmers who are not familiar with recursion. This can make it harder to maintain and debug the code over time.
7. **Functional limitations:** Some programming languages and environments have functional limitations that make recursion less efficient or impractical. For example, some embedded systems may not have enough memory to support recursive algorithms.

Overall, while recursion is a powerful technique, it is not always the best choice for every programming problem. It is important to consider the potential limitations and drawbacks of recursion and to choose the best approach based on the specific requirements of the problem at hand.

## Tasks
- All `*-main.c` files are provided in the `[test_files](./test_files)` directory.
- We will be using function prototypes from the `[main.h](./main.h)` header file for this project.

---

<details>
<summary><a href="0-puts_recursion.c">0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget</a></summary>

<img src="./imgs/0-puts_recursion.png" alt="puts a string recursively">

## Task 0

<img src="./imgs/0-puts_recursion.png" alt="puts recursion>

```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
```

> compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion`

> Output:
>```shell
> Puts with recursion 
>```

</details>

---

<details>
<summary><a href="1-print_rev_recursion.c">1. Why is it so important to dream? Because, in my dreams we are together</a></summary>

## Task 1

<img src="./imgs/1-print_rev_recursion.png" alt="print in reverse with recursion">

```c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion`

> Output:
> ```shell
> reklaW notloC
>```

</details>

---

<details>
<summary><a href="2-strlen_recursion.c">2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange</a></summary>

## Task 2

<img src="./imgs/2-strlen_recursion.png" alt="string length with recursion">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen_recursion.c -o 2-strlen_recursion`

> Output:
> ```shell
> 14
>```

</details>

---

<details>
<summary><a href="3-factorial.c">3. You mustn't be afraid to dream a little bigger, darling</a></summary>

## Task 3

<img src="./imgs/3-factorial.png" alt="factorial">

```c
julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial`

> Output:
> ```c
> 1
> 120
> 3628800
> -1
> ```

</details>

---

<details>
<summary><a href="4-pow_recursion.c">4. Once an idea has taken hold of the brain it's almost impossible to eradicate</a></summary>


## Task 4

<img src="./imgs/4-pow_recursion.png" alt="power recursion">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
```

> compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow_recursion`

> Output:
> ```shell
> 1
> 1
> 65536
> 25
> -1
> -125
> ```

</details>

---

<details>
<summary><a href="5-sqrt_recursion.c">5. Your subconscious is looking for the dreamer</a></summary>

## Task 5

<img src="./imgs/5-sqrt_recursion.png" alt="square root recursion">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt_recursion`

> Output:
> ```shell
> 1
> 32
> 4
> -1
> 5
> -1
> ```

</details> 

---

<details>
<summary><a href="6-is_prime_number.c">6. Inception. Is it possible?</a></summary>

## Task 6

<img src="./imgs/6-is_prime_number.png" alt="prime number">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-is_prime_number`

> Output:
> ```shell
> 0
> 0
> 0
> 1
> 0
> 0
> 1
> 1
> ```

</details>

---

<details>
<summary><a href="100-is_palindrome.c">7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we sleep, we can do almost anything</a></summary>

## Task 7

<img src="./imgs/100-is_palindrome.png" alt="palindrome">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-is_palindrome.c -o 7-is_palindrome`

> Output:
> ```shell
> 1
> 1
> 0
> 1
> ```

</details>

---

<details>
<summary><a href="101-wildcmp.c">8. Inception. Now, before you bother telling me it's impossible...</a></summary>

## Task 8

<img src="./imgs/101-wildcmp.png" alt="wildcmp">

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-wildcmp.c -o 100-wildcmp`

> Output:
> ```shell
> 1
> 1
> 1
> 1
> 1
> 1
> 1
> 0
> 1
> 1
> 0
> 0
> ```

</details>

## Notes:
- `static` variables are not allowed.
- `loops` are not allowed.
