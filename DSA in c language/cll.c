#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *link;
    };
        int addcir(struct node **f,struct node **r,int num);
                int display(struct node *f);


    int main(){
        struct node *f,*r;
        f=r=NULL;
        addcir(&f,&r,100);
        addcir(&f,&r,200);
        addcir(&f,&r,300);
        addcir(&f,&r,30);
        addcir(&f,&r,89);
        display(f);
        return 0;
    }
    int addcir(struct node **f,struct node **r,int num){
        struct node *q;
        q=malloc(sizeof(struct node));
        q->data=num;
            if(*f==NULL){
                *f=*r=q;
                q->link=*f;
            }
            else{
                (*r)->link=q;
                *r=q;
                (*r)->link=*f;
            }
            return 0;
    }
    int display(struct node *f){
        struct node *q=f,*p=NULL;
            while(q!=p){
                printf("data=%d\n",q->data);
                q=q->link;
                p=f;
            }
            return 0;
    }