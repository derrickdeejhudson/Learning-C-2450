#include <stdio.h>

double getPositiveAverage(double myArray[], int numItems)
{
}

int countRangeValues(double arr[], int numItems, double entry)
{
    int count = 0;
    for (int i = 0; i < numItems; i++)
    {
        if (arr[i] <= (entry - 0.5) || arr[i] > (entry + 0.5))
            count++;
    }
    return count;
}

double getMaxAbsolute(double[], int)
{
}

int countInverses(int[], int)
{
}

double getMaxCount(double[], int)
{
}