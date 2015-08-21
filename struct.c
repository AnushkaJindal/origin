#include<stdio.h>

struct node{
	int data;
	struct node *next;
}node;
int main()
{

struct node *root;

root=(struct node *)malloc(sizeof(struct node));

root->next=NULL;
root->data=5;

printf("%d",node.data);
}

