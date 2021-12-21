#include <stdio.h>
#include <cs50.h>

int get_len(long n);
int luhn_algo(long n);
int card_type(long n);

int main(void)
{
    long n;
    int nlen;

    n = get_long("Number: ");
    nlen = get_len(n);

    if ((nlen == 13) | (nlen == 15) | (nlen == 16))
        printf("Good\n");
    else
        printf("INVALID\n");

}

int get_len(long n)
{
    int i = 0;

    do {
        n = n / 10;
        i++;
    }
    while (n != 0);

    return i;
}

int luhn_algo(long n)
{
    int sum1;
    int sum2;
    
}

int card_type(long n)
{

}