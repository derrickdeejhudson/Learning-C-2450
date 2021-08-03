#include <stdio.h>

double getPositiveAverage(double[], int);
int countRangeValues(double[], int, double);
double getMaxAbsolute(double[], int);
int countInverses(int[], int);
double getMaxCount(double[], int);

int main()
{
    double arr[] = {2.0, 3.0, 1.5, 1.8, 2.0, 2.1, 2.2, 2.4, 2.7, 3.0, 3.1, 3.2, 3.5, 3.7};

    countRangeValues(arr, 14, 2.5);
}