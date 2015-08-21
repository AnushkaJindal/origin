#include<stdio.h>

typedef struct node
{
int data;
struct node* next;
} Node; 
int main()
{

Node* mergeSortedLists(Node* l1, Node* l2) {
if (l1->data > l2->data) {
temp=l1;
l1=l2;
l2=temp;
}

Node* c1 = l1;
Node* c2 = l2;
Node* p1 = NULL;
Node* p2 = NULL;

while (c1 && c2) {
while (c1 && c1->data <= c2->data) {
p1 = c1;
c1 = c1->next;
}
p1->next = c2;

while (c2 && c2->data <= c1->data) {
p2 = c2;
c2 = c2->next;
}
p2->next = c1;
}

return l1;
}
}
