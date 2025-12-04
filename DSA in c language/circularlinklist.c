#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *link;
    };
                int addcir(struct node **f,struct node **r,int item);
                                int display(struct node *f);


        int main(){
            struct node *f,*r;
            f=r=NULL;
                addcir(&f,&r,10);
                addcir(&f,&r,50);
                addcir(&f,&r,40);
                addcir(&f,&r,500);
                addcir(&f,&r,200);
                display(f);
                return 0;
        }
            int addcir(struct node **f,struct node **r,int item){
                struct node *q;
                q=malloc(sizeof(struct node));
                q->data=item;
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
                            printf("%d\n",q->data);
                            q=q->link;
                            p=f;
                        }
                        return 0;
                }