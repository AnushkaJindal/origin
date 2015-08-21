#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	printf("enter elements of an array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=1;i<9;i++) // 3 5 2 7
	{
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<=arr[i]){
			
			continue;
			}
			else{
				//swap
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				i--;
			}
		}
	}
	printf("the sorted array is");
	for(i=0;i<9;i++)
	{
	printf("\n%d",arr[i]);
	}
	return 0;
}
