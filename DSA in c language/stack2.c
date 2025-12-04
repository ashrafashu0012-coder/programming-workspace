#include<stdio.h>
#include<stdlib.h>
    struct node {
        int data;
        struct node *link;
    };
        int push(struct node **p,int num);
    int pop(struct node **s);
        int display(struct node *q);
    int count(struct node *q);


    int main(){
        struct node *top=NULL;
        int item;
        push(&top,1000);
        push(&top,2000);
        push(&top,3000);
        push(&top,4000);
        push(&top,5000);
     printf(" node =%d \n",count(top));
    display(top);

    printf("items that will be poped");
        item=pop(&top);
        printf("%d \n",item);

        item=pop(&top);
        printf("%d \n",item);
        printf("  number of items after poped= %d \n",count(top));
        display(top);
return 0;

    }
    int push(struct node **p,int num){
        struct node *tem;
        tem=malloc(sizeof(struct node));
        tem->data=num;
        tem->link=*p;
        *p=tem;
        return 0;
    }
    int pop(struct node **s){
        int item;
        struct node *q;
                if(*s==NULL){
                    printf("stack is empty \n");
                }
              else{
                q=*s;
                item=q->data;
                *s=q->link;
free(q);
              }  
              return item;
    }
    int display(struct node *q){
        while(q!=NULL){
            printf("%d\n",q->data);
            q=q->link;
        }
        return 0;
    }
    int count(struct node *q){
        int c=0;
        while(q!=NULL){
            q=q->link;
            c++;
        }
        return c;
    }