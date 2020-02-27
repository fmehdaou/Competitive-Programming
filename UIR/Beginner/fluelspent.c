#include <stdio.h>

int main()
{
    int input;
    scanf ("%d", &input);
    printf ("%d\n", input);
    int tab[7] = {100, 50, 20, 10, 5, 2, 1};
    int counte[7] = {0};
    int i = 0;
    while (i < 7)
    {
        if (input >= tab[i])
        {
            counte[i] = input / tab[i];
            input %= tab[i];
        }
        i++;
    }
    i = -1;
    while (i++ < 7)
        printf("%d nota(s) de R$ %d,00\n", counte[i], tab[i] );
}