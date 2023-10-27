#ifndef __MACRO__
#define __MACRO__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char);

int trOf(char);

int expo(int, int);

int divInt(int, int);

int mod(int, int);

unsigned int binary_to_uint(const char *);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif