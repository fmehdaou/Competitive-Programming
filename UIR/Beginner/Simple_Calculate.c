#include <stdio.h>

int main()
{
    long long int id;
    long long int unit;
    double price;
    long long int id2;
    long long int unit2;
    double price2;
    scanf("%lld %lld %lf",&id,&unit,&price);
     scanf("%lld %lld %lf",&id2,&unit2,&price2);
    printf("VALOR A PAGAR: R$ %.2lf", (unit*price)+ (unit2*price2));
    return (0);
}