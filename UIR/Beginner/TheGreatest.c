#include <stdio.h>

int main()
{
    long long int a;
    long long int b;
    long long int c;
    long long res;
    scanf("%lld %lld %lld",&a,&b,&c);
    res = a;
    if (a < b)
        res = b;
    if (res < c)
        res = c;
    printf("%lld eh o maior\n",res);
    return (0);
}