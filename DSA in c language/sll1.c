#include<stdio.h>
#include<stdlib.h>
    struct node {
        int data;
        struct node *link;
    };

       void start(struct node **q,int num);
        int end(struct node **q,int num);
   int between(struct node *q,int loc,int num);
   void display(struct node *a);
    int count(struct node *t);


    int main(){
        struct node *p=NULL;

        start(&p,100);
        start(&p,200);
        start(&p,300);
        start(&p,400);

        
        between(p,2,80);
        between(p,5,45);

        end(&p,1500);
        end(&p,1200);
        end(&p,1600);
        end(&p,1900);

                printf("total node=%d\n",count(p));
                display(p);
                return 0;
    }

   void start(struct node **q,int num){
    struct node *tem;
    tem=malloc(sizeof(struct node));
    tem->data=num;
    tem->link=*q;
    *q=tem;
   } 

        int end(struct node **q,int num){
            struct node *r,*tem;
            tem=*q;
                if(*q==NULL){
                    tem=malloc(sizeof(struct node));
                    tem->data=num;
                    tem->link=NULL;
                    *q=tem;
                }
            else{
                tem=*q;
                while(tem->link!=NULL){
                    tem=tem->link;
                }
                r=malloc(sizeof(struct node));
                r->data=num;
                r->link=NULL;
                tem->link=r;
            }    
            return 0;
        } 

   int between(struct node *q,int loc,int num){
    struct node *tem,*r;
    int i;
    tem=q;
            for(i=1;i<loc;i++){
                tem=tem->link;
            }
        if(tem==NULL){
            printf("location od node=%d\n",loc);
            return 0;
        }    
        else{
            r=malloc(sizeof(struct node));
            r->data=num;
            r->link=tem->link;
            tem->link=r;
        }
        return 0;
   }     

   void display(struct node *a){
    while(a!=NULL){
        printf(" data of list=%d\n",a->data);
        a=a->link;
    }
}
int count(struct node *t){
    int c=0;
    while(t!=NULL){
        t=t->link;
        c++;
    }
    return c;
}