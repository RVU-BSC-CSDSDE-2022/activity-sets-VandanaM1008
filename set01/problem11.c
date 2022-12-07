#include <stdio.h>
int main()
{
    int a, b, c, d, x, y;    
    printf("Enter the real and imaginary parts of first complex number: ");
    scanf("%d%d", &a, &b);
    printf("Enter the real and imaginary parts of second complex number: ");
    scanf("%d%d", &c, &d);    
    x = a + c;
    y = b + d;
    printf("Sum of the complex numbers = %d + %di", x, y);
    return 0;
}