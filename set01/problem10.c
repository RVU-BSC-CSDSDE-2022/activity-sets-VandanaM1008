#include<stdio.h>
int main()
{
  char str1[10];
  char str2[20];
  int value;
  printf("Enter the first string:");
  scanf("%s",&str1);
  printf("Enter the second string");
  scanf("%s",&str2);
  int i=0;
 while (str1[i] != str2[i] && str1[i] != '\0')
	{
		i++;
	}
 if (str1[i] > str2[i])
		printf ("First string is greater than Second string\n");
	else if (str1[i] < str2[i])
		printf("Second string is greater than First string\n");
	else
		printf ("Both strings are EQUAL\n");
  }