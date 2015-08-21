#include <stdio.h>
#include <string.h>

#define A 'a'
#define B 'b'
#define C 'c'

void compress(char c[], int l) {

	int i=0;
	int sum=0, rem=0, avg;

	for (i=0;i<l;i++) sum += c[i];
	rem = sum % l;
	avg = sum / l;

	//check if all elements are same
	if((avg==A && !rem) || (avg==B && !rem) || (avg==C && !rem)) return;

	if(l==2) {
		c[0]=A+B+C-c[0]-c[1];
		c[1]='\0';
		return;
	}else{
		while((i+2)<l) {

			if((c[i+0]+c[i+1]+c[i+2])==(A+B+C)) {
				if(c[i+3]!=c[i+2])
					c[i+0]=c[i+2];
				else
					c[i+0]=c[i+1];
				
				memmove(&c[i+1], &c[i+2], l-i);
				c[l]='\0'; --l;
				continue;
			}
			i++;
		}


		i=0;
		while((i+1)<l)  {
			if(((c[i+0]+c[i+1])==(A+B))|| ((c[i+0]+c[i+1])==(B+C)) || ((c[i+0]+c[i+1])==(A+C))){
				c[i+0]=A+B+C-c[i+0]-c[i+1];
				memmove(&c[i+1], &c[i+2], l-i);
				c[l]='\0'; --l;
				continue;
			}
			i++;
			if(i==l && l>2)
				i=0;
		}

		compress(c,l);
	}
}

int main(void) {
	int i, len;
	char c[40];
	printf("Enter string {a,b,c}* : ");
	scanf("%s",c);
	len=strlen(c);
	printf("String is : %s\n",c);

	compress(c,len);
	printf("String is : %s\n",c);
	return 0;
}
