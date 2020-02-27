#include <stdio.h>

int main()
{
    double r;
    double res;
    double pi;

    pi = 3.14159;
    scanf("%lf", &r);
    res = pi * r * r;
    printf("A=%.4lf\n", res);
    return (0);
}