#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *link;
    };
 
        int addbeg(struct node **q,int num);
            int append(struct node **q,int num);
int addafter(struct node *q,int loc,int num);
int display(struct node *q);
    int count(struct node *q);




 int main(){
    struct node *p=NULL;
    
     append(&p,1200);
    append(&p,1400);
    append(&p,1800);

    addbeg(&p,100);
    addbeg(&p,200);
    addbeg(&p,300);

  addafter(p,1,60);
    addafter(p,4,30);

    printf("node=%d \n",count(p));
    display(p);
    return 0;
 }
    int addbeg(struct node **q,int num){
        struct node *tem;
        tem=malloc(sizeof(struct node));
        tem->data=num;
        tem->link=*q;
        *q=tem;
        return 0;
    }   
int append(struct node **q,int num){
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
int addafter(struct node *q,int loc,int num){
    struct node *tem,*r;
    int i;
    tem=q;
            for(i=1;i<loc;i++){
                tem=tem->link;
            }
        if(tem==NULL){
            printf("%d \n",loc);
        }    
        else{
            r=malloc(sizeof(struct node));
            r->data=num;
            r->link=tem->link;
            tem->link=r;
        }
        return 0;
}  

int display(struct node *q){
    while(q!=NULL){
        printf("%d \n",q->data);
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
    