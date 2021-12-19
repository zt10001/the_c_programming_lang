/*
 * Write a program `detab` that replaces tabs in the input
 * with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter?
 * 
 */

#include <stdio.h>

#define MAXLEN 1000
#define N 4 /* tabstop for every n columns */

/* functions */
int getLine(char [], int);

/* function getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
            s[i] = c;
    if (c == '\n') {
            s[i] = c;
            ++i;
    }
    s[i] = '\0';
    return i;
}

void detab(char in[], char out[])
{
    int i; /* index for read line */
    int j; /* index for modified (written) line */
    int nblanks; /* number of blanks to the next tab stop */

    for (i = j = 0; in[i] != '\0'; ++i)
        if (in[i] == '\t') {
                nblanks = N - (j % N);
                while (nblanks-- > 0)
                    out[j++] = ' ';
        } else
                out[j++] = in[i];
    out[j] = '\0';
}

int main(void)
{
    char in[MAXLEN];
    char out[MAXLEN];

    while (getLine(in, MAXLEN) > 0) {
        detab(in, out);
        printf("%s", out);
    }
    return 0;
}