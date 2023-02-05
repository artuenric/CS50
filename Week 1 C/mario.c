#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ensure that the input is correct (1 >= height <= 8)
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //The number of sppaces will change over time, as will the numbers of bricks
    int space = height - 1;
    int bricks = 0;

    //Creates lines
    for (int j = height; j > 0 ; j--)
    {
        //Adds spaces and bricks as per the line
        for (int s = space ; s > 0; s--)
        {
            printf(" ");
        }

        for (int b = bricks; b > 0; b--)
        {
            printf("#");
        }
        printf("#");

        //Hole
        printf("  ");

        //Second pyramid lines
        for (int b = bricks; b > 0; b--)
        {
            printf("#");
        }
        printf("#\n");

        //Change the numbers of bricks and spaces
        bricks += 1;
        space -= 1;
    }
}

