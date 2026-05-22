#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    for (int col = 1; col <= height; col++)
    {
        for (int space = height - col; space > 0; space--)
        {
            printf(" ");
        }
        for (int row = 0; row < col; row++)
        {
            printf("#");
        }
        printf("\n");
    }
}