#include <stdio.h>

int main()
{
    char name[10];
    double salary;
    double bonus;

    scanf("%s %lf %lf",name,&salary,&bonus);
    printf("TOTAL = R$ %.2lf\n",(salary + (bonus * 0.15)));
    return (0);
}