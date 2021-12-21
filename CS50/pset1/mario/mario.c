#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;

    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int i = 0; i < h; ++i)
    {
        int nspace = h - (i + 1);
        int nhash = i + 1;
        
        for (int j = 0; j < nspace; ++j)
        {
            printf(" ");
        }
        for (int s = 0; s < nhash; ++s)
        {
            printf("#");
        }

        printf("  ");

        for (int s = 0; s < nhash; ++s)
        {
            printf("#");
        }

        printf("\n");
    }
}