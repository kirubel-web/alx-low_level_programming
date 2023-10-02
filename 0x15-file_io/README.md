C provides a set of functions for performing file I/O operations, including reading from and writing to files. The key header file you'll need is `<stdio.h>`, which stands for "Standard Input/Output."

Here are the basic file I/O operations you'll commonly encounter:

1. **Opening a File**: Before reading from or writing to a file, you need to open it using the `fopen()` function. It takes two arguments: the file name (including the path) and the mode.

```c
FILE* file = fopen("filename.txt", "r");
```

In this example, we are opening the file "filename.txt" in read mode ("r"). The `fopen()` function returns a `FILE` pointer, which you can use for subsequent file operations.

The most common modes for `fopen()` are:
- `"r"`: Read mode (file must exist).
- `"w"`: Write mode (create a new file or overwrite an existing file).
- `"a"`: Append mode (write data at the end of an existing file or create a new file).
- `"r+"`: Read and write mode.
- `"w+"`: Read and write mode (create a new file or overwrite an existing file).
- `"a+"`: Read and append mode.

2. **Closing a File**: Once you finish working with a file, you should close it using the `fclose()` function.

```c
fclose(file);
```

3. **Reading from a File**: To read data from a file, you can use functions like `fgetc()` and `fgets()`.

- `fgetc()` reads a single character from the file and returns it as an integer.

```c
int ch = fgetc(file);
```

- `fgets()` reads a line of text from the file.

```c
char buffer[100];
fgets(buffer, sizeof(buffer), file);
```

4. **Writing to a File**: To write data to a file, you can use functions like `fputc()` and `fputs()`.

- `fputc()` writes a single character to the file.

```c
fputc('A', file);
```

- `fputs()` writes a string to the file.

```c
fputs("Hello, World!", file);
```
