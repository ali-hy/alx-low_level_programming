section .data
ali_print db "Hello, Holberton", 10, 0;
section .text
extern printf
global main
main:
sub rsp, 8;
mov rdi, ali_print;
call printf;
add rsp, 8;
mov eax, 0;
ret;
