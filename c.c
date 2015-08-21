#include<stdio.h>
int main(){
    int arr[1000],i,j,sum=0,n;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter elements of the arrayn");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j)
			{
                break;
            }
        }
        if(j==n)
        sum+=arr[i];
    }
    printf("Sum of unique elements is %d",sum);
    return 0;
}
