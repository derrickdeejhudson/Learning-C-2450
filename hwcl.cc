#include <stdio.h>

int width = 20;
int height = 10;
int i, j;
void printRectangleWhile(int width, int height)
{
    i = 0;
    j = 0;
    while (i < width)
    {
        while (j < height)
        {
            printf("+");
            j++;
        }
        printf("\n");
        i++;
    }
}

void printTriangleFor(int width)
{
    i = 0;
    j = 0;
    for (j = 0; j < height; j++)
    {
        for (i = 0; i < width; i++)
            printf("-");
        printf("\n");
    }
}
