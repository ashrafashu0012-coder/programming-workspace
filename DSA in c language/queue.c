#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *link;
    };

        int addq(struct node **f,struct node **r,int num);
                   int display(struct node *q);
                int count(struct node *q);

 int main(){
        struct node *front,*rear;
        front=rear=NULL;
            addq(&front,&rear,10);
            addq(&front,&rear,20);
            addq(&front,&rear,30);
            addq(&front,&rear,40);
            addq(&front,&rear,50);
            display(front);
            printf("node=%d\n",count(front));
            return 0;
    }

    int addq(struct node **f,struct node **r,int num){
        struct node *q;
        q=malloc(sizeof(struct node));
        q->data=num;
        q->link=NULL;
                if(*f==NULL){
                    *f=*r=q;
                }
                else{
                    (*r)->link=q;
                    *r=q;
                }
                return 0;
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
