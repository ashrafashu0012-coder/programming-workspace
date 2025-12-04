#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *link;
    };
            void addbeg(struct node **p,int num);
            int append(struct node **p,int num);
            int  addafter(struct node *p,int loc,int num);
            void display(struct node *q);
            int count(struct node *q);

 int  main(){
    struct node *p=NULL;
    addbeg(&p,10);
        addbeg(&p,20);
    addbeg(&p,30);
display(p);
printf("node=%d\n",count(p));

append(&p,100);
append(&p,200);
append(&p,300);
append(&p,400);
append(&p,500);
append(&p,600);
append(&p,700);
display(p);
printf("node=%d\n",count(p));

addafter(p,2,25);
addafter(p,4,80);
display(p);
printf("node=%d\n",count(p));
return 0;
}           void addbeg(struct node **p,int num){
    struct node *tem;
    tem=malloc(sizeof(struct node));
    if(tem==NULL){
        printf("----");
    }
    tem->data=num;
    tem->link=*p;
    *p=tem;
    
}

int   append(struct node **q,int num){
    struct node  *r,*tem;
    tem=malloc(sizeof(struct node));
    tem->data=num;
    tem->link=NULL;
                    if(*q==NULL){
                        *q=tem;
                    }
            else{
                r=*q;
                while(r->link!=NULL){
                    r=r->link;
                }
                r->link=tem;
            }     
     return 0;        
}


int  addafter(struct node *p,int loc,int num){
    struct node *tem,*r;
    int i;
    tem=p;
        for(i=1;i<loc;i++){
            tem=tem->link;
        }
     if(tem==NULL){
        printf("location=%d\n",loc);
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

             void display(struct node *q){
            while(q!=NULL){
            printf("%d\n",q->data);
            q=q->link;
            
            }
    
        }
int count(struct node *q){
    int c=0;
    while(q!=NULL){
        q=q->link;
        c++;
    }
    return c;
}