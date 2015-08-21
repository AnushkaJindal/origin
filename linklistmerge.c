#include<stdio.h>
#include<stdlib.h>
#define replace_head(c,x) c=x;x=x->nxt;c->nxt=NULL
struct node_{
    int val;
    struct node_ *nxt;
};
typedef struct node_ * list;
list init_list(int x){
   list l=(list)malloc(sizeof(struct node_));
   l->val=x;
   l->nxt=NULL;
   return l;
}
void insertElem(list l,int x){
   while(l->nxt!=NULL)
        l=l->nxt;
    l->nxt=(list)malloc(sizeof(struct node_));
    l->nxt->val=x;
    l->nxt->nxt=NULL;
    return;
}
void printList(list l){
    while(l){
        printf("%d ",l->val);
        l=l->nxt;
        }
    printf("\n");
}
list merge(list a,list b){
    list tmp,c;
    if(a->val<b->val){
        replace_head(c,a);
         }
    else{
       replace_head(c,b);
        }
    tmp=c;
    while(a&&b){
        if(a->val<b->val){
            tmp->nxt=a;
            replace_head(tmp,a);
            }
        else{
            tmp->nxt=b;
            replace_head(tmp,b);
            }
      
    }
    if(a==NULL)
        tmp->nxt=b;
    else
        tmp->nxt=a;
    return c;
}

int main(){
    list l1=init_list(23);
    list l2=init_list(42);
    int i;
    for(i=0;i<10;i++)
       insertElem(l1,rand()%100);
    for(i=0;i<7;i++)
       insertElem(l2,rand()%100);
    printf("Lists to Be merged are \n");
    printList(l1);
    printList(l2);
    getc(stdin);
    printList(merge(l1,l2));  


}
