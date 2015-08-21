#include <stdio.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       	int Array[50],j, s,i , n;
	
	scanf("%d",&n);
	
	for(i=0;i<n-1;i++)
	scanf("%d\t",&Array[i]);
	
	for(i=0;i<n;i++)
	{
        j=(Array[n-1]+Array[i])/n;
        
        if(Array[i+1]-Array[i]!=j)
            {s=Array[i]+j;
            printf("%d",s);
            }}
    return 0;
}
