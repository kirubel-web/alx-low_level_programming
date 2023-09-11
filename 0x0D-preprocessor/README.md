The C preprocessor is a program that processes the source code before it is compiled. It performs various tasks, including macro expansion and conditional compilation. Macros are a feature of the C preprocessor that allow you to define reusable code snippets. They are typically used to define constants, perform simple computations, or create shorthand notations.

To define a macro, you use the `#define` directive. Here's the syntax:

```c
#define MACRO_NAME replacement_text
```

When the preprocessor encounters the `MACRO_NAME` in the code, it replaces it with the `replacement_text`. For example:

```c
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))

float radius = 5.0;
float circumference = 2 * PI * radius;

int x = 10;
int y = 20;
int max_value = MAX(x, y);
```

In the above code, `PI` is defined as a constant, and `MAX` is defined as a macro that returns the maximum of two values.

C provides several predefined macros that are commonly used. Some of the most common ones include:

- `__LINE__`: The current line number as an integer.
- `__FILE__`: The current file name as a string.
- `__DATE__`: The current date as a string (in the format "Mmm dd yyyy").
- `__TIME__`: The current time as a string (in the format "hh:mm:ss").
- `__cplusplus`: Defined when the code is compiled as C++.

To include guard your header files, you can use a technique called "header file protection" or "header file inclusion guard." It prevents multiple inclusions of the same header file, which can lead to compilation errors due to redefinitions.

Here's an example of how to include guard a header file:

```c
#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

// Content of the header file

#endif
```

In the above code, `HEADER_FILE_NAME_H` is an arbitrary name unique to the header file. It's convention to use the header file name in uppercase with underscores. When the preprocessor encounters the `#ifndef` directive, it checks if the macro `HEADER_FILE_NAME_H` is not defined. If it's not defined, the preprocessor defines it using the `#define` directive and includes the content of the header file. If it's already defined (from a previous inclusion), the preprocessor skips the content until it reaches the `#endif` directive.

By using include guards, you ensure that the header file is included only once, even if it is included multiple times in different source files. This helps prevent duplication errors and improves compilation efficiency.
