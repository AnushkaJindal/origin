#include<stdio.h>

//int foo(int n);
int n,j;
int main(){
    
    printf("enter the no. of distinct factors");
    scanf("%d",&n);

   // foo(n);
  // }
//int foo(int n){
    int f=2,i=6,count=0;
    while(f<i){
        if(i%f==0){
            printf("%d\n",f);
            count++;
			f++;
		  }
            
        if(count==n){
            printf("number:%d",i);
            break;
		  }
        else{
            i++;
        }
	}
     return 0;       
    }


