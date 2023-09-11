# 0x0E. C - Structures, typedef

## Resources
- [0x0D. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230320%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230320T034042Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b866a8710c9837b4d79b8aed1f6fce74b472559da6cca165ca28fdf95a120cf3)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0D. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230320%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230320T034126Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=56761faab9e596493706888885b710c7b1f25ea839d101261b8e719f9b75be51)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- [Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189]()
- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/)

---

## Learning Objectives
- [What are structures, when, why and how to use them](#what-are-structures-when-why-and-how-to-use-them)
- [How to use `typedef`](#how-to-use-typedef)

---

> ### - What are structures, when, why and how to use them

In C programming, a structure is a collection of variables that can be of different data types. It allows you to group related data items and organize them into a single unit. You can access each item individually or together as a group.

Structures are commonly used when you want to group data together and pass it as a single entity to functions or modules. They also allow you to create user-defined data types that can be used in your program.

To define a structure, you use the `struct` keyword followed by the name of the structure and a set of braces that contains the variables or members of the structure:

```c
struct person {
   char name[50];
   int age;
   float salary;
};
```

You can then create variables of this structure type and access the members using the dot `.` operator:
    
```c
struct person achraf;
strcpy(achraf.name, "Achraf El Khnissi");
achraf.age = 44;
achraf.salary = 1;
```

Structures can also be used as function parameters or return types:

```c
struct person get_person() {
   struct person p;
   strcpy(p.name, "Achraf El Khnissi");
   p.age = 44;
   p.salary = 1;
   return p;
}
```

> ### - How to use `typedef`

`typedef` is a keyword in C that allows us to create an alias for an existing data type or structure. It is useful when we want to create a new data type that represents an existing type or structure. Here's an example:

```c
typedef struct {
    char name[20];
    int age;
} Person;
```

The above code creates a new data type called `Person` that represents the structure `struct person`. We can now use the `Person` data type to declare variables of this type:

```c
Person achraf;
achraf.age = 44;
strcpy(achraf.name, "Achraf El Khnissi");
```

`typedef` can also be used to create aliases for existing data types. For example, the following code creates an alias for the `int` data type:

```c
typedef int Integer;
Integer i = 10; /* i is an int */
```

---

## Tasks

---

<details>

<summary>
<a href="./dog.h">0. Django</a>
</summary>

### 0. Django

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;
	
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
```

> Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-dog.c -o a`
> Output:
```shell
$ ./a
My name is Poppy, and I am 3.5 :) - Woof!
$
```

</details>

---

<details>

<summary>
<a href="./1-init_dog.c">1. A dog is the only thing on earth that loves you more than you love yourself</a>
</summary>

### 1. A dog is the only thing on earth that loves you more than you love yourself

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;
    
    init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

> Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b`
> Output:
```shell
$ ./b
My name is Poppy, and I am 3.5 :) - Woof!
$
```

</details>

---

<details>

<summary>
<a href="./2-print_dog.c">2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad</a>
</summary>

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;
    
    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    print_dog(&my_dog);
    return (0);
}
```

> Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c 1-init_dog.c -o c`
> Output:
```shell
$ ./c
Name: Poppy
Age: 3.500000
Owner: Bob
$
```

</details>

---

<details>

<summary>
<a href="./dog.h">3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read</a>
</summary>

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	dog_t my_dog;
	
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	

    printf("My name is %s, I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

> Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-dog.c -o d`
> Output:
```shell
$ ./d
My name is Poppy, I am 3.5 :) - Woof!
$
```

</details>

---

<details>

<summary>
<a href="./4-new_dog.c">4. A door is what a dog is perpetually on the wrong side of</a>
</summary>

### 4. A door is what a dog is perpetually on the wrong side of

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c 3-dog.c -o e`

> Output:
```shell
$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
$
```

</details>

---

<details>

<summary>
<a href="./5-free_dog.c">5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg</a>
</summary>

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

```c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c 3-dog.c -o f`
> Output:
```shell
$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
$
```
