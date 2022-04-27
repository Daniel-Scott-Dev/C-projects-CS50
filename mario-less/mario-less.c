#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variable int input of "height"
    int height;
    do
    { // Prompting user for height
        height = get_int("Height: ");
    }
    // making sure input is within the positive nr range of 1-8
    while (height < 1 || height > 8);

    // for each row
    for (int row = 0; row < height; row++)
    {
        // for each column
        for (int column = 0; column < height; column++)
        { // when to print space
            if (row + column < height - 1)
                printf("  ");

            else
                printf("# ");
        }
        printf("\n");
    }
}
