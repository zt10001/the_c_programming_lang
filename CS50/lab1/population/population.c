#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size;
    int end_size;
    int current_year_end_size;
    int years;

    /* Prompt for start size */
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    /* TODO: Prompt for end size */
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    current_year_end_size = start_size;
    for (years = 0; current_year_end_size < end_size; ++years)
    {
        current_year_end_size = current_year_end_size + (current_year_end_size / 3) - (current_year_end_size / 4);
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}