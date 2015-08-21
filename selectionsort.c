#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	printf("enter elements of an array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]<=arr[j]){
			
			continue;
			}
			else{
				//swap
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<9;i++)
	{
	printf("the sorted array is\n%d",arr[i]);
	}
	return 0;
}
