#include<stdio.h>

int main()
{
	int arr[50],j, i , n,sum=0;
	
	printf("enter the no. of elements of an array");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("\n%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(arr[i]==arr[j] && i!=j)
		   {
	          break;
	       }
	    
	    }
	}
	if(j==n)
	sum+=arr[i];
	
    printf("sum=%d",sum);
}
