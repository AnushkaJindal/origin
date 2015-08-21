#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *s;
	int i,k,c=0;
	s = (char *)malloc(10 * sizeof(char));
	
	strcpy(s,"aabbcc");
	
	printf("enter the no. of unique chr");
	scanf("%d",&k);
	while(c<=k)
	{
	
	for(i=0;i<sizeof(s);i++)
	{
		if(s[i]==s[i+1])
		c++;
		
		
	}}
	printf("%d",c);
}
