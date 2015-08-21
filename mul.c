#include<stdio.h>
 
int main()
{
	int x,y,i=0,j;
	printf("enter x and y");
	scanf("%d%d",&x,&y);
	
if(x>0&&y>0&&x<y)
{
    	for(j=1;j<=y/x;j++)
    	{
    	    if(x*j<=y)
    	    {
    	    	i++;
    		   printf("%d\n",x*j);
    		
    	    }
    	    
}        }
else if(x>0&&y>0&&y<x)
{
		printf("1");
    		
    	    }
else if(x<0&&y>0)
{
		for(j=1;j>=x-1;j--)
    	{
    	    if(x*j<=y)
    	    {
    	    	i++;
    		   printf("%d\n",x*j);
    		
    	    }
    	    
}      
}

        printf("the no. of multiples are %d",i);
}
