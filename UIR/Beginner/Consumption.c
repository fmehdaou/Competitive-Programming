#include <stdio.h>

int main()
{
    long long int x;
    double y;
    scanf("%lld %lf",&x,&y);
    printf("%.3lf km/l\n",x/y);
    return (0);
}