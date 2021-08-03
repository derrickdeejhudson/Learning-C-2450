#include <stdio.h>

double getPositiveAverage(double[], int);
int countRangeValues(double[], int, double);
double getMaxAbsolute(double[], int);
int countInverses(int[], int);
double getMaxCount(double[], int);

int main()
{
    //double arr[] = {0.0, -3.0, 1.5, 1.8, 2.0, 2.1, 2.2, 2.4, 2.7, 3.0, 3.1, 3.2, 3.5, 3.7};
    //double arr[] = {-2.5, -10.1, 5.2, 10.1};
    //int arr[] = {-2, -6, 4, 5, 2, 8, 9, -8, -4, 3};
    double arr[] = {1.0, 2.1, 3.2, 4.3, 5.4, 6.5, -10.9};

    //countRangeValues(arr, 14, 2.5);
    //getPositiveAverage(arr, 14);
    getMaxAbsolute(arr, 7);
    //countInverses(arr, 10);
}