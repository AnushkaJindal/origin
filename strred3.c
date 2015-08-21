#include <stdio.h>
#include <string.h>
void reduce (char toReduce)
{
    arr [] paths = new string [6];
    string min = toReduce;

    path[0] = toReduce.replace('ac', 'b');
    path[1] = toReduce.replace('ab', 'c');
    path[2] = toReduce.replace('bc', 'a');
    path[3] = toReduce.replace('cb', 'a');
    path[4] = toReduce.replace('ca', 'b');
    path[5] = toReduce.replace('ba', 'c');

    for (int i = 0; i < 6; i++)
    {
        if (path[i] != toReduce) 
            path [i] = reduce (path[i]);
        if (path[i].length < min.length) min = path[i];
    }
    return min;
}

int main(void) {
	int i, len;
	char c[40];
	printf("Enter string {a,b,c}* : ");
	scanf("%s",c);
	len=strlen(c);
	printf("String is : %s\n",c);

	reduce (string c);
	printf("String is : %s\n",c);
	return 0;
}
