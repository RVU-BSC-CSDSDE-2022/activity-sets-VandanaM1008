#include <stdio.h>
typedef struct complex
{
    int real;
    int imag;
} complex;
int main()
{
    int n, i;
    float sumReal = 0, sumImag = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    complex numbers[n];
    printf("Enter the complex numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d + %di", &numbers[i].real, &numbers[i].imag);
    }

    for(i = 0; i < n; i++)
    {
        sumReal = sumReal + numbers[i].real;
        sumImag = sumImag + numbers[i].imag;
    }

    printf("Sum of the complex numbers = %.1f + %.1fi", sumReal, sumImag);
    return 0;
}