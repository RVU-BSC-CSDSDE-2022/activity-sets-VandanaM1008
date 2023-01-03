#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
 input(); 
  
}
int input()
{
  int a,b,c;
  printf("enter the value");
  scanf("%d %d %d",&a ,&b ,&c);
  compare(a,b,c);  
}
int compare(int a, int b, int c)
{
 if (a >= b && a >= c)
   printf("biggest number is %d",a);
  else if(b >= a && b >= c)
    printf("biggest number is %d",b);
  else
    printf("biggest number is %d",c);
}
void output(int a,int b,int c,int largest)
{
  printf("the largest of %d,%d,%d is %d\n",a,b,c,largest);
}