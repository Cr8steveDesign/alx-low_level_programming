# 0x0F. C - Function pointers

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory


### Tasks 
#### 0. What's my name
Write a function that prints a name.

`Prototype: void print_name(char *name, void (*f)(char *));`

``gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a``

#### 1. 