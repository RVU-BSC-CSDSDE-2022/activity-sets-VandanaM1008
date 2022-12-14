#include<stdio.h>
#include<math.h>
float calc_area(float a,float b,float c)
{
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)(s-b)(s-c));
}
int main()
{
    float a, b, c, s, area;
    printf("\nEnter three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("\n Area of triangle: %.2f\n", calc_area(a,b,c));
     return 0;
  }