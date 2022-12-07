#include<stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of all natural numbers until %d: %d\n", n, sum);
    return 0;
}
