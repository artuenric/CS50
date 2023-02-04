#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size, end_size, years;
    float size;
    bool allow_start, allow_end = false;
    // TODO: Prompt for start size

    do
    {
        start_size = get_int("Start size: ");

        if (start_size > 0 && start_size >= 9)
        {
            allow_start = true;
        }

    }
    while (allow_start == false);

    // TODO: Prompt for end size

    do
    {
        end_size = get_int("End size: ");

        if (end_size > 0 && end_size >= start_size)
        {
            allow_end = true;
        }

    }
    while (allow_end == false);

    // TODO: Calculate number of years until we reach threshold

    size = (float) start_size;
    years = 0;

    while (size <  end_size)
    {
        int born = (int) size / 3;
        int pass = (int) size / 4;
        size = (int) size + born - pass;
        years ++;

    }

    // TODO: Print number of years

    printf("Years: %i\n", years);

}
