In C, structures (also known as structs) are user-defined composite data types that allow you to group together related variables of different data types into a single unit. They provide a way to create complex data structures that can represent real-world entities or organize related data logically.

Here's an example of how to define a structure:

```c
struct Person {
    char name[50];
    int age;
    float height;
};
```

In the above code, we define a structure named `Person` that has three members: `name`, `age`, and `height`. Each member can have a different data type.

Structures are used when you need to represent entities with multiple properties. For example, you might use a structure to represent a person with attributes like name, age, and height. Structures are also useful for organizing related data, creating records, or representing complex data structures like linked lists, trees, or graphs.

To use a structure, you typically declare variables of that structure type and access its members using the dot (`.`) operator:

```c
struct Person person1;
strcpy(person1.name, "John");
person1.age = 25;
person1.height = 1.75;
```

In the above code, we declare a variable `person1` of type `struct Person` and assign values to its members using the dot operator.

C also provides the `typedef` keyword, which allows you to create custom type aliases. It can be used to provide a shorter or more descriptive name for a complex type like a structure, union, or pointer.

Here's an example of how to use `typedef` with a structure:

```c
typedef struct {
    char name[50];
    int age;
    float height;
} Person;
```

In the above code, we define a structure inline without specifying a name, and then immediately create a type alias `Person` using `typedef`. Now, we can use `Person` as a shorthand for `struct Person`:

```c
Person person1;
strcpy(person1.name, "John");
person1.age = 25;
person1.height = 1.75;
```

Using `typedef` can make your code more readable and maintainable, especially when dealing with complex or lengthy type names. It also allows you to abstract away implementation details by using custom type names that convey the purpose or semantics of the data structure.