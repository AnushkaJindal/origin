#include "stdio.h"
#include<string.h>

void main()
{
char str[50];
int i,n;
printf("Enter your string");
for(n=0;n<10;n++)
scanf("%[^\t\n]s",&str[n]); 
i = strlen(str);// -- variable i to store length of entered string
printf("%s %d",str,i);// -- display the entered string and length of string
getch();

}

