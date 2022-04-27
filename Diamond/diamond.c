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

    // upper shape of diamond
    for (int row1 = 1; row1 <= height; row1++)
    {
        // Printing top left spaces
        for (int space1 = row1; space1 <= height - 1; space1++)
        {
            printf(" ");
        }
        // printing top shape of diamond in hashes
        for (int hashup = height; hashup + 1 - row1 <= height - 1 + row1; hashup++)
        {
            printf("#");
        }
        printf("\n");
    }

    // lower part of diamond
    for (int row2 = 1; row2 <= height - 1; row2++)
    {
        // printing lower part of spaces
        for (int space2 = 1; space2 <= row2; space2++)
        {
            printf(" ");
        }
        // printing lower part of hashes left side
        // for (int hashD = 1; hashD - 1 + row2 <= height + 1 - row2; hashD++) this did not work for both sides.
        for (int hashD = height - 1; hashD >= row2; hashD--)
        {
            printf("#");
        }
        // printing lower part of hashes right side
        for (int hashDR = height - 2; hashDR >= row2; hashDR--)
        {
            printf("#");
        }
        printf("\n");
    }
}