#include <stdio.h>

double getPositiveAverage(double arr[], int numItems)
{
    return 1.0;
}

int countRangeValues(double arr[], int numItems, double entry)
{
    int count = 0;
    for (int i = 0; i < numItems; i++)
    {
        if (arr[i] < (entry - 0.5) || arr[i] >= (entry + 0.5))
        {
            count++;
            //printf("%d\n", count);
        }
        else
        {
        }
    }
    //printf("%d\n", count);
    int n = numItems - count;
    printf("%d\n", n);
    return n;
}

double getMaxAbsolute(double arr[], int numItems)
{
    return 1.0;
}

int countInverses(int arr[], int numItems)
{
    return 0;
}

double getMaxCount(double arr[], int numItems)
{
    return 1.0;
}