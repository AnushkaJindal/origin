#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100], temp;
   int i, j = 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
   
   printf("\nReversed string is: ");
   
   for(i=0;str[i]!='\0';i++)
   {
   if(str[i+1]==' '||str[i+1]=='\0')
   {
   	for(j=i;j>=0&&str[j]!=' ';j--)
   	{
   		printf("%c",str[j]);
   	}
   	printf(" ");
}}
 
   return (0);
}
