#include <stdio.h>

double getPositiveAverage(double arr[], int numItems)
{
    int count = 0;
    double sum = 0.0;
    printf("%f\n", sum);
    for (int i = 0; i < numItems; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
            count++;
            //printf("%f\n", sum);
        }
        else
        {
        }
        //printf("%f\n", sum);
    }
    //printf("%d\n", count);
    double n = sum / count;
    //printf("%f\n", n);
    return n;
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
    int highest = 0;
    for (int i = 0; i < numItems; i++)
    {
        if (arr[i] > 0 && arr[i] >= arr[highest] && arr[i] >= (arr[highest] * -1))
        {
            highest = i;
        }
        if (arr[i] < 0 && arr[i] <= arr[highest] && arr[i] <= (arr[highest] * -1))
        {
            highest = i;
        }
        else
        {
        }
    }
    //printf("%f\n", arr[highest]);
    return arr[highest];
}

int countInverses(int arr[], int numItems)
{
    int count = 0;

    for (int i = 0; i < numItems; i++)
        for (int j = i + 1; j < numItems; j++)
            if (arr[i] + arr[j] == 0 && arr[i] != 0 && arr[j] != 0)
            {
                //printf("%d\n", count);
                arr[i] = 0;
                arr[j] = 0;
                count++;
            }

    printf("%d\n", count);
    return count;
}

double getMaxCount(double arr[], int numItems)
{
    return 1.0;
}