#include<stdio.h>
#include<stdlib.h>
    struct node {
        int data;
        struct node *link;
    };
        int push(struct node **p,int num);
                int pop(struct node **s);

                int display(struct node *p);

    int count(struct node *p);


    int main(){
        struct node *top=NULL;
        int item;

        push(&top,100);
        push(&top,200);
        push(&top,300);
        push(&top,400);
        push(&top,500);
        push(&top,600);

        printf("node=%d \n",count(top));
        display(top);

        printf(" -->items that are poped from stack:: \n");
                item=pop(&top);
                printf("%d\n",item);

                 item=pop(&top);
                printf("%d\n",item);
                
                item=pop(&top);
                printf("%d\n",item);
                                     printf(" -->Number of item after poped=%d :: \n",count(top));
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
                printf("stack empty \n");
            }
            else{
                q=*s; 
                item=q->data;
                *s=q->link;
                free(q);
            }
            return item;
        }

    int display(struct node *p){
        while(p!=NULL){
            printf("%d\n",p->data);
            p=p->link;
        }
        return 0;
    }
    int count(struct node *p){
        int c=0;
        while(p!=NULL){
            p=p->link;
            c++;
        }
        return c;
    }