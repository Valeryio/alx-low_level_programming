# C - More malloc, free

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them

## Student
DMT Linson

### Task 0 - Trust no one

Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
