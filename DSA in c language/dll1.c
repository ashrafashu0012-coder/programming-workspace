#include<stdio.h>
#include<stdlib.h>
    struct dnode{
        struct dnode *prev;
        int data;
        struct dnode *next;
    };
        int addbeg(struct dnode **s,int num);
         int append(struct dnode **s,int num);
 int addafter(struct dnode *q,int loc,int num);
 int display(struct dnode *q);
 int count(struct dnode *q);


    int main(){
        struct dnode *p=NULL;

    //     append(&p,1200);
    //  append(&p,1600);
    // append(&p,1400);
  
        addbeg(&p,100);
    addbeg(&p,200);
    addbeg(&p,300);

      append(&p,1200);
     append(&p,1600);
    append(&p,1400);
  
    addafter(p,2,59);
    addafter(p,3,45);

        printf("node=%d \n",count(p));
        display(p);
        return 0;
    }
    int addbeg(struct dnode **s,int num){
        struct dnode *tem;
        tem=malloc(sizeof(struct dnode));
        tem->prev=NULL;
        tem->data=num;
        tem->next=*s;
        (*s)->prev=tem;
        *s=tem;
        return 0;
    }
 int append(struct dnode **s,int num){
    struct dnode *r,*tem;
    tem=*s;
            if(*s==NULL){
                (*s)=malloc(sizeof(struct dnode));
                (*s)->prev=NULL;
                (*s)->data=num;
                (*s)->next=NULL;
            }
        else{
            while(tem->next!=NULL){
                tem=tem->next;
            }
            r=malloc(sizeof(struct dnode));
            r->next=NULL;
            r->data=num;
            r->prev=tem;
            tem->next=r;
        }    
        return 0;
 }   
 int addafter(struct dnode *q,int loc,int num){
    struct dnode *tem;
    int i;
        for(i=1;i<loc;i++){
            q=q->next;

        }
        if(q==NULL){
            printf("%d \n",loc);
        }
        else{
            q=q->prev;
            tem=malloc(sizeof(struct dnode));
            tem->data=num;
            tem->prev=q;
            tem->next=q->next;
            tem->next->prev=tem;
            q->next=tem;
        }
        return 0;
        
 }
 int display(struct dnode *q){
    while(q!=NULL){
        printf("data=%2d<-->",q->data);
        q=q->next;
    }
    return 0;
 }
 int count(struct dnode *q){
    int c=0;
    while(q!=NULL){
        q=q->next;
        c++;
    }
    return c;
 }
