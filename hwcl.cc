#include <stdio.h>

int width;
int height;
int inner;
int i, j;

void printRectangleWhile(int width, int height)
{
    i = 1;
    while (i <= height)
    {
        j = 1;
        while (j <= width)
        {
            if (i == 1 || i == height || j == 1 || j == width)
                printf("+");
            else
                printf("-");
            j++;
        }
        printf("\n");
        i++;
    }
}

void printTriangleFor(int width)
{
    //i == 1 ||
    for (i = 1; i <= width; i++)
    {
        for (j = i; j < width; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            if (i == width || j == 1 || i == j)
                printf("+");
            else
                printf("-");
        }
        printf("\n");
    }
}
