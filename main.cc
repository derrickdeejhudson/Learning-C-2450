#include <stdio.h>

//sample main.cc

//prototypes from hwcl.cc are required so that the compiler knows
//parameters and return types for those functiosn at compile time.
void printRectangleWhile(int, int);
void printTriangleFor(int);

int main()
{
    printRectangleWhile(10, 6);
    printTriangleFor(12);
}