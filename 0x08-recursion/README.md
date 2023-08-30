Recursion in C programming refers to the process of a function calling itself. In other words, a recursive function is a function that solves a problem by breaking it down into smaller instances of the same problem.

Recursion involves two main components:

Base Case: It is the condition that determines when the recursive function should stop calling itself and return a result. It acts as the terminating condition for the recursive process. Without a base case, the recursive function would continue calling itself indefinitely, resulting in a stack overflow error.
Recursive Case: It is the part of the function where the function calls itself with modified arguments to solve a smaller instance of the problem. By solving smaller instances of the problem and combining their results, the function eventually solves the original problem.