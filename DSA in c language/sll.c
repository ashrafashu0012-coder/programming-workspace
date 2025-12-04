#include<stdio.h>
#include<stdlib.h>
    struct node{
int data;
struct node *link;
    };

      void addbeg(struct node **q,int num);
                int append(struct node **q,int num);
              int addafter(struct node *q,int loc,int num);
        void display(struct node *p);
            int count(struct node *y);


    int main(){
        struct node *p=NULL;
            append(&p,1500);
            append(&p,1300);
            append(&p,1800);
            append(&p,2500);

            addbeg(&p,100);
            addbeg(&p,200);
            addbeg(&p,300);
            addbeg(&p,400);

            addafter(p,2,50);
            addafter(p,4,75);
            printf("total node =%d \n",count(p));
            display(p);
    return 0;        
    }

  void addbeg(struct node **q,int num){
    struct node *tem;
    tem=malloc(sizeof(struct node));
    tem->data=num;
    tem->link=*q;
    *q=tem;
  }  
                int append(struct node **q,int num){
                    struct node *r,*tem;
                  //tem=*q;
                
                 if(*q==NULL){
                    tem=malloc(sizeof(struct node));
                    tem->data=num;
                    tem->link=NULL;
                    *q=tem;
                 }   
                 else{
              //tem=*q;
            
                    while(r->link!=NULL){
                        r=r->link;
                        r=malloc(sizeof(struct node));
                        r->data=num;
                        r->link=NULL;
                        tem->link=r;
                    }
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

        void display(struct node *p){
            while(p!=NULL){
                printf("%d\n",p->data);
                p=p->link;
            }
        }      
            int count(struct node *y){
                int c=0;
                while(y!=NULL){
                    y=y->link;
                    c++;
                }
                return c;
            }
    