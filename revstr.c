#include<stdio.h>
#include<stdlib.h>

int main()
{ 	int i=0,s,j,n;
	
	int length=0;
	
	char arr[10], str[10];

    char*p;
    
	p=&arr[0];
	
	printf("enter the string to be reversed");
	gets(arr);
	
	while(*p!='\0'){
        length++;
        p++;
	}
	printf("lenght is %d",length);

//	j=sizeof(arr);
    j=length-1;
	while(i<length)
	{
	
	  str[j]=arr[i];
	 
	  i++;
	  j--;	
	}
	printf("the reversed string is");
	for(n=0;n<length;n++){
	
	printf(" %c",str[n]);
}
}
