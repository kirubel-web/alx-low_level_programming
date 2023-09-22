; Declare needed C functions
extern printf

section .data
    msg db "Hello, Holberton", 0 ; Define the string variable named msg
    fmt db "%s", 10, 0 ; Define the string variable named fmt and initialize it with “%s\n\0”

section .text ; Code section
global main ; The standard gcc entry point
main:       ; The program label for the entry point
    push rbp ; set up stack frame

   ; Pass the arguments to printf
    mov rdi, fmt ; First argument: the format string
    mov rsi, msg ; Second argument: the string to print
    mov	rax, 0		; Move 0 into rax register

    ; Call printf
    call	printf		; Call printf function

    ; Clean up the stack and return
    pop rbp ; restore stack
	mov	rax,0		; normal, no error, return value
    ret ; return
