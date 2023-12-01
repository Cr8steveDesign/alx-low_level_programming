# 0x0C. C - More Malloc( ), Free( )

Continuing Dynamic Memory Allocation in C using the Malloc and Free Function available in the stdlib header file.

## Concepts
Automatic and Dynamic Allocation: Malloc and Free

## Learning Objective:

   How to use the  `exit`  function
-   What are the functions  `calloc`  and  `realloc`  from the standard library and how to use them


## Tasks
### Task 0. Trust No One 

File: 0-malloc_checked.c

Write a function that allocates memory using  `malloc`.

-   Prototype:  `void *malloc_checked(unsigned int b);`
-   Returns a pointer to the allocated memory
-   if  `malloc`  fails, the  `malloc_checked`  function should cause normal process termination with a status value of  `98`

### Task 1. string_nconcat :
File:  `1-string_nconcat.c`
Write a function that concatenates two strings.

-   Prototype:  `char *string_nconcat(char *s1, char *s2, unsigned int n);`
-   The returned pointer shall point to a newly allocated space in memory, which contains  `s1`, followed by the first  `n`  bytes of  `s2`, and null terminated
-   If the function fails, it should return  `NULL`
-   If  `n`  is greater or equal to the length of  `s2`  then use the entire string  `s2`
-   if  `NULL`  is passed, treat it as an empty string
