#include <stdio.h>

int width;
int height;
int inner;
int i, j;

void printRectangleWhile(int width, int height)
{
    i = 1;
    while (i <= width)
    {
        j = 1;
        while (j <= height)
        {
            if (i == 1 || i == width || j == 1 || j == height)
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
    //i = 0;
    //j = 0;
    for (i = 1; i <= width; i++)
    {
        for (j = 1; j <= width; j++)
            printf("-");
        printf("\n");
    }
}
