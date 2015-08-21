#include<stdio.h>
int gcd(int,int);
int main()
{
	int k,n,c;
	printf("enter the no.");
	scanf("%d%d",&n,&k);
	c=gcd(n,k);
	printf("%d",c);
	getch();
	return 0;
	
}

int gcd(int n, int k)
{

if(k==0)
	   return n;
	if(k>n)
	return gcd(k,n);
	  else if(n>=k&&k>0)
	   return gcd(k,n%k);
}
