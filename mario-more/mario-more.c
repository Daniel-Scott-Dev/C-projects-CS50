#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variable int input of "height"
    int height;
    do
    {
        // Prompting user for height
        height = get_int("Height: ");
    }
    // making sure input is within the positive nr range of 1-8
    while (height < 1 || height > 8);

    // for each row
    for (int row = 1; row <= height; row++)
    {
        // for each space1 to be printed
        for (int space1 = row; space1 <= height - 1; space1++)
        {
            printf(" ");
        }
        // for each hash left to be printed for left pyramid
        for (int hashL = height + 1 - row; hashL <= height; hashL++)
        {
            printf("#");
        }
        // for each space between pyramids
        for (int space2 = height + 1; space2 <= height + 2; space2++)
        {
            printf(" ");
        }
        // for each hash for right pyramid
        for (int hashR = height + 3; hashR <= height + 2 + row; hashR++)
        {
            printf("#");
        }
        printf("\n");
    }
}