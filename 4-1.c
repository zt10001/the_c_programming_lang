/*
 * Exercise 4-1. Write the function strindex(s, t) which returns the position 
 * of the rightmost occurence of t in s, or -1 if there is none.
 */

#include <stdio.h>
#include <string.h>

#define MAXLEN 1000  // max input line length

// functions
int getLine(char [], int);
int strindex(char [], const char []);

