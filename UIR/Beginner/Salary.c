#include <stdio.h>

int main()
{

    long long int id;
    long long int h;
    double money;

    scanf("%lld %lld %lf",&id,&h,&money);
    printf("NUMBER = %lld\n",id);
    printf("SALARY = U$ %.2lf\n",money*h);
    return (0);
}